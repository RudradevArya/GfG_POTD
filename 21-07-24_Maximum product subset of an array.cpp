
//https://www.geeksforgeeks.org/problems/maximum-product-subset-of-an-array/1
//21 july 24
class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        // Write your code here
        int n=arr.size();
        long long prod=1, maxi=INT_MIN, z=0, nz=0;
        if(arr.size()==1) return arr[0];
        for(int i=0; i<n;++i){
            if(arr[i]!=0){
                prod= (prod * arr[i])%1000000007;
                nz=1;
                // if(arr[i]<0) maxi=max(maxi,1LL * arr[i]);
            }else{
                z=1;
            }
            if(arr[i]<0 and arr[i]>maxi){
                maxi =arr[i];
            }
        }
        // if(z==n){
        //         return 0;
        //     }
        //     if(prod<0){
        //         prod/=maxi;
        //     }
        // return (1LL*prod)%1000000007;
        if(nz!=1) return 0;
        if(n==2 and z==1 and prod<0) return 0;
        if(prod<0){
            prod/=maxi;
        }
        return prod;
        // int pre=1, suf=1, maxi=0;
        // int n=arr.size();
        // for(int i=0;i<n;++i){
        //     if(pre==0){
        //         pre=1;
        //     }
        //     if(suf==0){
        //         suf=1;
        //     }
        //     pre *= arr[i];
        //     suf *= arr[n-i-1];
        //     maxi = max(maxi,max(suf,pre));
        // }
        // return maxi;
    }
};