
//28 June
//https://www.geeksforgeeks.org/problems/the-palindrome-pattern3900/1
class Solution {
  public:
    bool CheckPalin(int arr[], int n){
        for(int i=0;i<n;++i){
            if(arr[i]!=arr[n-1-i]){
            return false;
            }
        }
        return true;
    }

    string pattern(vector<vector<int>> &arr) {
        // Code Here
        int n=arr.size();
        string ans = "-1";
        //parsing and traveesring rows
        for(int row=0; row<n;++row){
            int temp[n];
            for(int col=0;col<n;++col){
                temp[col]=arr[row][col];
            }
            if(CheckPalin(temp, n)){
                ans= to_string(row)+" R";
                return ans;
            }
        }
        //parsing and traveesring cols
        for(int col=0; col<n;++col){
            int temp[n];
            for(int row=0;row<n;++row){
                temp[row]=arr[row][col];
            }
            if(CheckPalin(temp, n)){
                ans= to_string(col)+" C";
                return ans;
            }
        }
        return ans;
    }
};