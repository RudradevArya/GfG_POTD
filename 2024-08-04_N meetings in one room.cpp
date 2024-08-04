
//https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1
//4 aug 24
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        // sort(start, start+n);
        // sort(end, end+n);
        
        vector<pair<int,int>> dick;
        for(int i=0;i<n;++i){
            dick.push_back({end[i],start[i]});
        }
        
        sort(dick.begin(), dick.end());
        
        int cnt=1;// limit=end[0];
        int limit=dick[0].first;
        for(int i=1;i<n;++i){
            if(dick[i].second>limit){
                limit=dick[i].first;
                cnt++;
            }
        }
        return cnt;
    }
};