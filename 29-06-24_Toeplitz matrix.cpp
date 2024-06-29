
//https://www.geeksforgeeks.org/problems/toeplitz-matrix/1
//27 June

bool isToeplitz(vector<vector<int>>& mat) {
    // code here
    int rows = mat.size();
    int cols = mat[0].size();
    
    for (int row = 0; row < rows - 1; ++row) {
        for (int col = 0; col < cols - 1; ++col) {
            if (mat[row][col] != mat[row + 1][col + 1]) {
                return false;
            }
        }
    }
    
    return true;
    // int n = mat.size();
    // int cnt=0;
    // for(int i=0; i<n; ++i){
    //     for(int j=0;j<mat[i].size();++i){
    //         if(i==j){
    //             cnt++;
    //         }
    //     }
    // }
    
    // if(cnt == n){
    //     return true;
    // }else{
    //   return false; 
    // }