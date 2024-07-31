
//https://www.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1
//31 JULY 24
class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        if(arr.empty()){
            return "-1";
        }
        int n=arr.size();
        int minLen=arr[0].size();
        for(int i=0;i<n;++i){
            if(arr[i].size() < minLen){
                minLen =arr[i].size();
            }
        }
        
        char curr;
        string res;
        for(int i=0;i<minLen;++i){
            curr=arr[0][i];
            for(int j=0;j<n;++j){
                if(arr[j][i]!=curr){
                    // return res;
                    if(res.empty()){
                        return "-1";
                    }
                    return res;
                }
            }
            res.push_back(curr);
        }
        // return (res);
        if(res.empty()){
            return "-1";
        }
        else{return res;
        }
    }
};