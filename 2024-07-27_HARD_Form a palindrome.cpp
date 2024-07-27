
//https://www.geeksforgeeks.org/problems/form-a-palindrome1455/1
//27 july 24
//https://youtu.be/Kfy9G2xC_gU

// explanation
//3 problems
// reverse this string (n-LCS)
// Logenest common substring
// longest common palindrome
class Solution{
  public:
    int lcs(string s1, string s2, int n){
        //base
        // int ans;
        
        int dp[n+1][n+1];
        
        for(int i=0;i<=n;++i){
          for(int j=0;j<=n;++j){
                if(i==0 || j==0){
                    // ans=0;
                    dp[i][j]=0;
                }
            }  
        }
        //recur 
        
        for(int i=1;i<=n;++i){
          for(int j=1;j<=n;++j){
                if(s1[i-1]==s2[j-1]){
                    // ans=1+i-1 j-1;
                    dp[i][j] = 1 + dp[i-1][j-1] ;
                }else{
                    // ans=max([i-1][j], [i][j-1]);
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }  
        }
        // return ans;
        return dp[n][n];
    }
    ///////Method 1 TLE maar gaya
    // int mini(string &s, int L, int R){
    //     if(L>=R)    return 0;
        
    //     if(s[L] == s[R]){
    //         return mini(s,L+1,R-1);
    //     }
        
    //     return 1+min(mini(s,L,R-1), mini(s,L+1,R));
    // }
    int countMin(string str){
    //complete the function here
        string rev = str;
        int n=str.size();
        reverse(rev.begin(), rev.end());
        
        return n - lcs(str, rev, n);
        /////method 1 TLE
        // return mini(str, 0 , str.length()-1);
    }
};
