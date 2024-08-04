
//https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1
//1st aug 24
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        // code here
        std::vector<int> result;
    if (matrix.empty() || matrix[0].empty()) return result;
    
    int m = matrix.size(), n = matrix[0].size();
    int left = 0, right = n - 1, top = 0, bottom = m - 1;
    
    while (left <= right && top <= bottom) {
        // Traverse right
        for (int j = left; j <= right; ++j)
            result.push_back(matrix[top][j]);
        ++top;
        
        // Traverse down
        for (int i = top; i <= bottom; ++i)
            result.push_back(matrix[i][right]);
        --right;
        
        if (top <= bottom) {
            // Traverse left
            for (int j = right; j >= left; --j)
                result.push_back(matrix[bottom][j]);
            --bottom;
        }
        
        if (left <= right) {
            // Traverse up
            for (int i = bottom; i >= top; --i)
                result.push_back(matrix[i][left]);
            ++left;
        }
    }
    
    return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Dr