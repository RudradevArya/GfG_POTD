//https://www.geeksforgeeks.org/problems/remove-duplicates3034/1
//28 july 24
class Solution {
  public:

    string removeDups(string str) {
        // Your code goes here
        int n=str.size();
        string res;
        
        map<char,bool> mp;
        for(auto c:str){
            if(!mp[c]){
                res+=c;
                mp[c]=true;
            }
        }
        return res;
        // for(int i=0;i<n;++i){
        //     if(str[i+1]==str[i]){
        //         str.erase(i+1);
        //     }
        // }
        // return str;
    }
};