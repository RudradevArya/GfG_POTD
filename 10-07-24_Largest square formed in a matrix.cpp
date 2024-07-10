//https://www.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix0806/1
//10 july 24
class Solution {
  public:
    
    int dpfunc(vector<vector<int>> &mat, int row, int col, int &maxi,vector<vector<int>> &dp){
        //base case;
        if(row>=mat.size() || col>=mat[0].size()){
            return 0;
        }
        if(dp[row][col] != -1){
            return dp[row][col];
        }
        //recursive case;
        int dia = dpfunc(mat,row+1, col+1,maxi,dp);
        int ryt = dpfunc(mat,row, col+1,maxi,dp);
        int down = dpfunc(mat,row+1, col,maxi,dp);
        
        if(mat[row][col]==1){
            dp[row][col] = 1+min(dia,min(ryt,down));
            maxi = max(maxi,dp[row][col]);
            // return ans;
            // return maxi;
            return dp[row][col];
        }else{
            return dp[row][col]=0;
        }
    }
    int maxSquare(int n, int m, vector<vector<int>> mat) {
        // code here
        int maxi=0;
        vector<vector<int>> dp(n,vector<int>(m,-1));
        dpfunc(mat,0,0,maxi,dp);
        return maxi;
    }
};