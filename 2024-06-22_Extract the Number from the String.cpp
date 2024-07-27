
//https://www.geeksforgeeks.org/problems/extract-the-number-from-the-string3428/1
//22 June
class Solution {
  public:
    long long ExtractNumber(string sentence) {

        // code here
        stringstream ss;
        ss << sentence;
        
        string temp;
        vector<long long> nums;
        
        while(ss >> temp)
        {
            if(all_of(temp.begin(), temp.end(), ::isdigit)){
                if (temp.find('9') == string::npos) {
                    nums.push_back(stoll(temp));
                }
            }
        }

        if (nums.empty()) {
            return -1;
        }

        return *max_element(nums.begin(), nums.end());
        }
        // while(!ss.eof())
        // {
        //     ss >> temp;
        //     if(temp == isdigit())
        //     {
        //         nums.push_back(temp);
        //     }
        //     // cout<<temp;
        //     // return temp;
        // }
        // for(auto i : nums)
        // {
        //     while(nums[i] > 0)
        //     {
        //         if(nums[i] == 9)
        //         {
        //             return nums[i];
        //         }
        //         return -1;
        //     }
            
        // }
        // return ss;
    // }
    
    
//   private:
//     bool isNum(string s){
//         return !s.empty() && find_if()
//     }
        
    
};