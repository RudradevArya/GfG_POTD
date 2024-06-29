//https://www.geeksforgeeks.org/problems/coverage-of-all-zeros-in-a-binary-matrix4024/1
//26 June
class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        // Code here
        int ans=0;
        for(int i=0; i<matrix.size();++i){
            for(int j=0;j<matrix[i].size(); ++j){
                if(matrix[i][j] == 0){
                    //left
                    if(j-1>=0 && matrix[i][j-1]){
                        ans++;
                    }
                    //rught
                    if(j+1 < matrix[i].size() && matrix[i][j+1]){
                        ans++;
                    }
                    //up
                    if(i-1>=0 && matrix[i-1][j]){
                        ans++;
                    }
                    //down
                    if(i+1< matrix.size()&& matrix[i+1][j]){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};