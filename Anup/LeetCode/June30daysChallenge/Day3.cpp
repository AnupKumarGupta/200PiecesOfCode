// There are 2N people a company is planning to interview. 
// The cost of flying the i-th person to city A is costs[i][0], 
// and the cost of flying the i-th person to city B is costs[i][1].

// Return the minimum cost to fly every person to a city such that exactly N people arrive in each city.


// https://leetcode.com/explore/challenge/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3349/


// IMPORTANT
// Work on 2D vectors. Sort 2D vectors based on a column
// IMPORTANT

class Solution {
public:
   static bool cmp(vector <int> a, vector <int> b){
      return abs(a[0] - a[1]) > abs(b[0] - b[1]);
   }
   int twoCitySchedCost(vector<vector<int>>& costs) {
      int n = costs.size();
      int a = n/2;
      int b = n/2;
      sort(costs.begin(), costs.end(), cmp);
      int ans = 0;
      for(int i = 0; i < n; i++){
         if(b == 0 || (costs[i][0] <= costs[i][1] && a > 0)){
            a--;
            //cout << a << " " << costs[i][0] << endl;
            ans += costs[i][0];
         } else {
            //cout << costs[i][1] << endl;
            b--;
            ans += costs[i][1];
         }
      }
      return ans;
   }
};
