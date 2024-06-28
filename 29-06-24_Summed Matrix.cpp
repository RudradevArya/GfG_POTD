
//https://www.geeksforgeeks.org/problems/summed-matrix5834/1
//24 June
class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        if (q < 2 || q > 2 * n) {
        return 0;
    }

    // Calculate the range of valid i values
    long long start = max(1LL, q - n);
    long long end = min(n, q - 1);

    // // Count the number of valid i values
    // return max(0LL, end - start + 1);
    return end - start + 1;
    
    // if (q < 2 || q > 2 * n) {
    //     return 0;
    // }

    // int count = 0;
    // for (int i = 1; i <= n; ++i) {
    //     int j = q - i;
    //     if (j >= 1 && j <= n) {
    //         ++count;
    //     }
    // }

    // return count;
    }
};