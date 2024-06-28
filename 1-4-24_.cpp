/*https://www.geeksforgeeks.org/problems/count-numbers-containing-43022/1
12 June 24
*/

class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int cnt = 0;
        for(int i=1; i<=n; ++i)
        {
            if(help(i))
            {
                cnt++;
            }
        }
        return cnt;
    }
    
    bool help(int n)
    {
        while(n > 0)
        {
            if(n % 10 == 4) return true;
            n /= 10;
        }
        return false;
    }
    
};
