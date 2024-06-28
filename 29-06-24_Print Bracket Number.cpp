//https://www.geeksforgeeks.org/problems/print-bracket-number4058/1
//23 June 
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        int L = 1;
        stack<int> R;
        vector<int> ans;
        for(int i=0;i<str.size();++i){
            if(str[i] == '('){
                ans.push_back(L);
                R.push(L);
                L++;
            }
            else if(str[i] == ')'){
                ans.push_back(R.top());
                R.pop();
            }
        }
        return ans;
    }
};