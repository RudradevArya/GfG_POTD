//https://www.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1
//8 july 24

//modified binary search

class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // complete the function here
        
        int n=arr.size();
        int s=0;
        int e=n-1;
        
        while(s<=e){
            int mid = (s+e)/2;
            // int mid = s + (e - s) / 2;
            if(arr[mid] == key){
                return mid;
            } 
            if(arr[s] <= arr[mid]){    
                if(arr[s] <= key && key <= arr[mid]){
                    e=mid-1;
                }else{
                    s=mid+1;
                }
            }else{
                if(arr[mid] < key && key <= arr[e]){
                s=mid+1;
                }else{
                    e=mid-1;
                }
            }
        }
        return -1;
    }
};