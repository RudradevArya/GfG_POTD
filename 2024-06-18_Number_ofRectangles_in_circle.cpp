
//https://www.geeksforgeeks.org/problems/rectangles-in-a-circle0457/1
//18 june
class Solution {
  public:
    int rectanglesInCircle(int r) {
        // code here
        //a2+b2=d2=(2r)^2 => b2 = 4r2-a2 
        int cnt =0; 
        for(int a=1; a<= 2*r;++a)
        {
            int b= sqrt(((4 * r * r)-(a*a)));
            cnt += int(b);
            
        }
        return cnt;
    }
};
