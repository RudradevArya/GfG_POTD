
//https://www.geeksforgeeks.org/problems/longest-alternating-subsequence5951/1
//18 july 24

class Solution {
  public:
    int alternatingMaxLength(vector<int>& arr) {
        // Code here
        int smolBig = 1, bigSmol=1;
        int n=arr.size();
        if(n<2){
            return n;
        }
        for(int i=1;i<n;++i){
            if(arr[i]>arr[i-1]){ //coming from smol to big
                smolBig = 1+bigSmol;
            }
            else if(arr[i]<arr[i-1]){//coming from big to smol
                bigSmol = 1+smolBig;
            }
        }
        return max(smolBig, bigSmol);
    }
};