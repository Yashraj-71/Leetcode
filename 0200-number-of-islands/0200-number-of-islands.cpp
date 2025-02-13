class Solution {
public:
    void bfs(int i, int j, vector<vector<int>>&vis, vector<vector<char>>& grid){
        int n=grid.size();
        int m=grid[0].size();

        queue<pair<int,int>>q;

        q.push({i,j});
        vis[i][j]=1;

        while(!q.empty()){
           auto p=q.front();
           q.pop();

           int r=p.first;
           int c=p.second;

           int dx[4]={0,0,1,-1};
           int dy[4]={1,-1,0,0};

           for(int k=0;k<4;k++){
            int new_i= r+dx[k];
            int new_j= c+dy[k];

            if(new_i<0|| new_i>=n || new_j<0 ||new_j>=m){
                continue;
            }
            if(vis[new_i][new_j]==1 || grid[new_i][new_j]=='0'){
                continue;
            }

            vis[new_i][new_j]=1;
            q.push({new_i,new_j});
           }
        }

    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>>vis(n, vector<int>(m,0));
        int cnt=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]&&grid[i][j]=='1'){
                    cnt++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return cnt;
    }
};