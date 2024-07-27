
//15 June
//https://www.geeksforgeeks.org/problems/mobile-numeric-keypad5456/1
class Solution {
  public:
    long long getCount(int n) {
        // Your code goes here
        vector<vector<int>> trans = {
            {0, 8}, 
            {1, 2, 4}, 
            {2, 1, 3, 5}, 
            {3, 2, 6}, 
            {4, 1, 5, 7}, 
            {5, 2, 4, 6, 8}, 
            {6, 3, 5, 9}, 
            {7, 4, 8}, 
            {8, 0, 5, 7, 9}, 
            {9, 6, 8}
        };
        
        
        vector<vector<long long>> table(n + 1, vector<long long>(10, 0));

        for (int i = 0; i < 10; ++i) {
            table[1][i] = 1;
        }
        
        for (int len = 2; len <= n; ++len) {
            for (int digit = 0; digit < 10; ++digit) {
                table[len][digit] = 0;
                for (int neighbor : trans[digit]) {
                table[len][digit] += table[len - 1][neighbor];
                }
            }
        }
        
        long long total_sequences = 0;
            for (int i = 0; i < 10; ++i) {
            total_sequences += table[n][i];
        }
        
        return total_sequences;
        
        
        
        
        
    }
};