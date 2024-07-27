//https://www.geeksforgeeks.org/problems/integral-points-in-triangle5026/1
//20 June
class Solution {
  public:
    long long int InternalCount(long long int p[], long long int q[],
                                long long int r[]) {
        // code here
        
        long long int B = boundry(p, q) 
            + boundry(q, r)
            + boundry(r,p);
        
        //long long int A = 0.5 * abs((q[0]*p[1] + p[0]*r[1] + r[0]*q[1]) - (q[1]*p[0] + p[1]*r[0] + r[1]*q[0]));        
       long long int A = abs(q[0] * p[1] + p[0] * r[1] + r[0] * q[1]
                            - q[1] * p[0] - p[1] * r[0] - r[1] * q[0]);     
        // return (A - (B/2) + 1
        return (A - B + 2) / 2;
        
    }
    
    private:
    long long int boundry(long long int p[], long long int q[]) {
        // Number of integral points on the line segment (p, q)
        return __gcd(abs(p[0] - q[0]), abs(p[1] - q[1]));
    }
//     long long int boundry(long long int p[], long long int q[])
//     {
//         //if lines parallel to x or y axis
//         if(p[0] == q[0])
//             return abs(p[1] - q[1]) - 1;
    
//         if(p[1] == q[1])
//             return abs(p[0] - q[0]) - 1;
            
//         return __gcd(abs(p[0] - q[0]),abs(p[1] - q[1])) - 1;
//     }
};