
//https://www.geeksforgeeks.org/problems/the-celebrity-problem/1
// 3 aug 24
class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // code here
        int n=mat.size();
        int a=0;
        int b=n-1;
        
        while(a<b){
            if(mat[a][b]){
                a++;
            }
            else{
                b--;
            }
        }
        for(int i=0;i<n;++i){
            if(i!=a && (!mat[i][a] || mat[a][i])){
                return -1;
            }
        }
        
        return a;
    }
};