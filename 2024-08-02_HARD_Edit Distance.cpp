//https://www.geeksforgeeks.org/problems/edit-distance3702/1
//2 aug 24
class Solution {
  public:
    int editDistance(string str1, string str2) {
        // Code here
        int m=str1.length(),n= str2.length();
        vector<vector<int>> dp(m+1,vector<int> (n+1, 0));
        
        for(int i=0;i<=m;++i){
            for(int j=0;j<=n;++j){
                if(i==0){
                    dp[i][j]=j;
                }
                else if(j==0){
                    dp[i][j]=i;
                }
                
                else if(str1[i-1] == str2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                
                else{
                    dp[i][j] = 1+min(dp[i][j-1],
                                min(dp[i-1][j],
                                dp[i-1][j-1]));
                }
            }
        }
        return dp[m][n];
    }
};