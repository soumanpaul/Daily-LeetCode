class UnionFind {
public:
    UnionFind(int sz) : root(sz), rank(sz) {
        for (int i = 0; i < sz; i++) {
            root[i] = i;
            rank[i] = 1;
        }
    }

    int find(int x) {
        if (x == root[x]) {
            return x;
        }
        return root[x] = find(root[x]);
    }

    void unionSet(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                root[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                root[rootX] = rootY;
            } else {
                root[rootY] = rootX;
                rank[rootX] += 1;
            }
        }
    }

    bool connected(int x, int y) {
        return find(x) == find(y);
    }

private:
    vector<int> root;
    vector<int> rank;
};



class Edge {
    public:
    int src, dest, cost;
    Edge(int s1, int s2, int w): src(s1),dest(s2), cost(w){}
};
// Overload the < operator.
bool operator<(const Edge &edge1, const Edge &edge2) {
    return edge1.cost > edge2.cost;
}

class Solution {
public:

    int minCostConnectPoints(vector<vector<int>>& points) {
        if (points.size() == 0) {
            return 0;
        }
        int n = points.size();
        UnionFind uf(n);
        vector<vector<int>>allEdges;
        priority_queue<Edge> pq;
        for(int i=0; i<n;i++){
            vector<int> &cord1 = points[i];
            for(int j=i+1;j<n;j++){
                vector<int> &cord2 = points[j];
                int weight = abs(cord1[0]-cord2[0])+abs(cord1[1]-cord2[1]);
                Edge edge(i,j,weight);
                pq.push(edge);
            }
        }
        // Storing all edges of our complete graph.
        int result = 0;
        int count = n - 1;
        
        while(!pq.empty() && count > 0){
            Edge edge = pq.top();
            pq.pop();
            if(!uf.connected(edge.src, edge.dest)) {
                uf.unionSet(edge.src, edge.dest);
                result += edge.cost;
                count--;
            }
        }

  
    return result;
    }
};




