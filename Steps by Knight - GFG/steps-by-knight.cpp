// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



struct cell {
    int x, y;
    int dis;
    cell() {}
    cell(int x, int y, int dis) : x(x), y(y), dis(dis) {}
};
class Solution {
public:
    bool isInside(int x, int y, int N) {
        if (x >= 1 && x <= N && y >= 1 && y <= N)
            return true;
        return false;
    }
    int minStepToReachTarget(vector<int> &KnightPos, vector<int> &TargetPos, int N) {

        int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
        int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

        queue<cell> q;

        q.push(cell(KnightPos[0], KnightPos[1], 0));

        cell t;
        int x, y;
        vector<vector<bool>> visit(N + 1, vector<bool>(N + 1, 0));

        // visit starting state
        visit[KnightPos[0]][KnightPos[1]] = true;

        // loop until we have one elementy oin queue
        while (!q.empty()) {
            t = q.front();
            q.pop();

            if (t.x == TargetPos[0] && t.y == TargetPos[1]) {
                return t.dis;
            }
            for (int i = 0; i < 8; i++) {
                x = t.x + dx[i];
                y = t.y + dy[i];

                if (isInside(x, y, N) && !visit[x][y]) {
                    visit[x][y] = true;
                    q.push(cell(x, y, t.dis + 1));
                }
            }
        }
        return 1;
    }

};


// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends