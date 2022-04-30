class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int> ans;
        vector<int> graph;
        vector<int> in_degree(numCourses, 0);
        
        if (numCourses == 0) {
            return ans;
        }
        
        // if(prerequisites.empty()){
        //     for(int i=0;i<numCourses;i++){
        //         ans[i]=i;
        //     }
        //     return ans;
        // }
        cout << "here"<<endl;
        for (vector<int>& x : prerequisites){
            in_degree[x[0]]++;
        }
        
        if(in_degree.empty())
            return vector<int>();
        
        
        queue<int>queue;
        
        for (int u = 0; u < numCourses; u++) {
            if( in_degree[u]==0){
                queue.push(u);
            }
        }
        
        while(!queue.empty()){
            int u = queue.front();
            queue.pop();
            ans.push_back(u);
            for(vector<int>& x : prerequisites){
                if(x[1]==u){
                    if(--in_degree[x[0]]==0)
                        queue.push(x[0]);
                }
            }
        }
        
        for(int i : in_degree){
            if(i !=0) {
                return vector<int>();
            }
        }      
        return ans;
    }
};