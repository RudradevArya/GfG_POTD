
// arr : given vector of elements
// target : given sum value
//https://www.geeksforgeeks.org/problems/three-sum-closest/1
//9 july 24
class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int sum=0;
        
        int nearestSum = arr[0]+arr[1]+arr[2];
        
        for(int i=0;i<n;++i){
            int p1=i+1;
            int p2=n-1;
            
            
            
            while(p1<p2){
                int currSum=arr[i] + arr[p1] + arr[p2];
                if(abs(currSum-target) == abs(nearestSum-target)){
                    nearestSum = max(currSum, nearestSum);
                }else if(abs(currSum-target) < abs(nearestSum-target)){
                    nearestSum = currSum;
                }
                
                // if(arr[i] + arr[p1] + arr[p2] == target){
                //     sum=arr[i] + arr[p1] + arr[p2];
                //     return sum; 
                // }
                if(arr[i] + arr[p1] + arr[p2] < target){
                    p1++;
                }else{
                    p2--;
                }
            }
            
        }
        return nearestSum;
    }
};