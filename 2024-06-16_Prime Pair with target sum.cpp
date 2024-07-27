//https://www.geeksforgeeks.org/problems/sum-of-prime4751/1
// 16 June 24
class Solution {
  public:
    vector<int> getPrimes(int n) {
        // code here
        vector<bool> prim(n + 1, true);
        prim[0] = prim[1] = false;

        for (int p = 2; p * p <= n; ++p) {
            if (prim[p]) {
                for (int i = p * p; i <= n; i += p) {
                    prim[i] = false;
                }
            }
        }

        for (int a = 2; a <= n / 2; ++a) {
            if (prim[a] && prim[n - a]) {
                return {a, n - a};
            }
        }

        return {-1, -1};
    }
};