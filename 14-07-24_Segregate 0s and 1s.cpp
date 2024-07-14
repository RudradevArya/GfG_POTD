//https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1
//14 july 24
class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n=arr.size();
        int cnt0= 0;
        for(int i=0; i<n;i++){
            if(arr[i]==0){
                cnt0++;
            }
        }
        
        for(int i=0; i<cnt0;i++){
            arr[i]=0;
        }
        
        for(int i=cnt0; i<n;i++){
            arr[i]=1;
        }
        
    }
};