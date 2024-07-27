
// https://www.geeksforgeeks.org/problems/maximum-connected-group/1
//11th july 24
class Solution {
  public:
    int dfs(vector<vector<int>>& grid, int row, int col, int idx){
        int n=grid.size();
        //base
        if(row<0 || row>=n || col<0 || col>=n || grid[row][col] != 1){
            return 0;
        }
        
        grid[row][col] = idx;
        
        int cnt = dfs(grid,row+1,col,idx) //bottom
                    + dfs(grid,row-1,col,idx) //top
                    + dfs(grid,row,col-1,idx) //left
                    + dfs(grid,row,col+1,idx); //ryt
        
        return cnt+1; //added 1 bcz adding the place whree we standing;
    }
    
    void neighbours(vector<vector<int>>& grid, int row, int col, set<int> &s){
        int n=grid.size();
        
        if(row > 0) 
            s.insert(grid[row-1][col]); //when we want to accces prev element we can do that when the curr element is not 0 
        if(row < n-1) 
            s.insert(grid[row+1][col]);
        if(col > 0) 
            s.insert(grid[row][col-1]);
        if(col < n-1) 
            s.insert(grid[row][col+1]);
        
    }
    
    int MaxConnection(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int res=0;
        int idx=2;
        // int cnt;
        
        map<int,int> m;
        
        // find all islands and mark them with unique idx
        for(int row=0; row<n;++row ){
            for(int col=0; col<n;++col){
                if(grid[row][col] == 1){
                    m[idx] = dfs(grid, row, col, idx);
                    res = max(res,m[idx]);
                    idx++;
                }
            }
        }
        
        //changing each 0 to 1 && calculate  new size
         for(int row=0; row<n;++row ){
            for(int col=0; col<n;++col){
                if(grid[row][col] == 0){
                    // m[idx] = dfs(grid, row, col, idx);
                    set<int> s;
                    neighbours(grid, row, col, s);
                    int cnt =1;
                    
                    for(int i: s){
                        cnt += m[i];
                    }
                    res = max(res, cnt);
                }
            }
        }
        return res;
    }
};
