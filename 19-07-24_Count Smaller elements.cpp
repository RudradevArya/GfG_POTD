// User function Template for C++
//  User function template for C++

//https://www.geeksforgeeks.org/problems/count-smaller-elements2214/1
//19 july 24

//https://www.geeksforgeeks.org/ordered-set-gnu-c-pbds/
//reading source on PBDS in cpp

//CPP SOLUTION
#include <ext/pb_ds/assoc_container.hpp>
// Including tree_order_statistics_node_update
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree < int ,  null_type ,  less_equal<int> ,  rb_tree_tag ,  tree_order_statistics_node_update >

class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        // code here
        ordered_set ans_set;
        vector<int> ans(arr.size(),0);
        for(int i=arr.size()-1;i>=0;i--){
          ans[i]= ans_set.order_of_key(arr[i]);
          ans_set.insert(arr[i]);
        }
        return ans;
    }
};