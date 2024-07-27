
//https://www.geeksforgeeks.org/problems/magical-box5306/1
//19 June
// class Solution {
//   public:
//     double maxVolume(double perimeter, double area) {
//         // code here
//     /////COPIEDDD
//     double P = perimeter;
//     double A = area;
//     double l = (P - sqrt(P * P - 24 * A)) / 12;
    
//     // Calculate volume V using the derived formula
//     double V = l * (A / 2.0 - l * (P / 4.0 - l));
//     // double w = (A / 2.0 - l * l) / (P / 4.0 - l);
//     // double h = (P / 4.0 - l - w);
    
//     // Calculate volume
//     //double V = l * w * h;
    
//     // Round the volume to 2 decimal places
//     V = round(V * 100.0) / 100.0;
    
//     // Return the maximum volume
//     return V;
    
    
//     }
// };

class Solution {
  public:
    double maxVolume(double perimeter, double area) {
        // Calculation of formula to find the maximum volume
        double ans =
            (pow((perimeter - (sqrt(pow(perimeter, 2) - (24 * area)))) / 12, 2) *
             ((perimeter / 4) -
              (2 * ((perimeter - (sqrt(pow(perimeter, 2) - (24 * area)))) / 12))));
            
            
        // Returning the maximum volume
        return ans;
    }
};