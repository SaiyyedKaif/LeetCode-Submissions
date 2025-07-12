class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       // My Bottom Up Approach for this problem .
       // Optimizing to achieve constant space complexity .
        int n = cost.size();
        int prev = 0;
        int curr = 0 ;
        for(int i = 2  ; i < n+1  ; i++){
            int next = min(curr + cost[i-1] , prev + cost[i-2]);
            prev = curr ;
            curr = next ;
        }
        return curr;
    }
};