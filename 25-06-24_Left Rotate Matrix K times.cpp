//25 June
//https://www.geeksforgeeks.org/problems/left-rotate-matrix-k-times2351/1
class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
         int numRows = mat.size();
          if (numRows == 0) return mat;
        int numCols = mat[0].size();
        // for(int i=0;i<mat.size();++i)
        // {
        //     rotateLeft(k, mat);
        // }
        for (int i = 0; i < numRows; ++i) {
            rotateLeft(k, mat[i]);
        }
        
        return mat;
    }
    
  private:
    void rotateLeft(int k, vector<int>& vec)
    {
        int n = vec.size();
        k = k % n;
        // int temp[k];
        
         if (k == 0) return;
        vector<int> temp(n);
         for (int i = 0; i < n; ++i) {
            temp[i] = vec[(i + k) % n];
        }


        for (int i = 0; i < n; ++i) {
            vec[i] = temp[i];
        }
        // for(int i=0; i<k;++i){
        //     temp[i] = vec[i];
        // }
        // for(int i=0;i<n-k;++i){
        //     vec[i] = vec[i+k];
        // }
        // for(int i=n-k;i<n;++i){
        //     vec[i] = temp[i-n+k];
        // }
    }
};