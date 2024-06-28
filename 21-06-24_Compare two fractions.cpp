// https://www.geeksforgeeks.org/problems/compare-two-fractions4438/1
// 21 June
class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        // return str[0];
        size_t comma = str.find(",");
        string str1 = str.substr(0, comma);
        string str2 = str.substr(comma + 2);
        
        size_t slash1 = str1.find("/");
        int a = stoi(str1.substr(0, slash1));
        int b = stoi(str1.substr(slash1 + 1));
        
        size_t slash2 = str2.find("/");
        int c = stoi(str2.substr(0, slash2));
        int d = stoi(str2.substr(slash2 + 1));
     
    
        
        if(a*d > c*b)
            return str1;
        else if(a*d < c*b)
            return str2;
        else
            return "equal";
            
            
            
        //     int a, b, c, d;
        // char slash, comma;
        
        // std::istringstream iss(str);
        // iss >> a >> slash >> b >> comma >> c >> slash >> d;
        
        // double frac1 = static_cast<double>(a) / b;
        // double frac2 = static_cast<double>(c) / d;
        
        // if (frac1 > frac2) {
        //     return std::to_string(a) + "/" + std::to_string(b);
        // } else if (frac2 > frac1) {
        //     return std::to_string(c) + "/" + std::to_string(d);
        // } else {
        //     return "equal";
        // }
        
    }
};
