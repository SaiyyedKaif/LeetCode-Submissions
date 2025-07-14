
// YE WALA CODE O(n) TIME COMPLEXITY LETA HAI AND O(n) SPACE COMPLEXITY

/* class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        else if (n == 2){
            return max(nums[0] , nums[1]);
        }
        vector<int> dp (n , 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0] , nums[1]);

        for(int i = 2 ; i < n ; i++){
            dp[i] = max(dp[i-1] , dp[i-2]+nums[i]);
        }
        return dp[n-1];
    }
}; */

// ABHI HAM ISKO OPTIMIZE KARENEGE BY REDUCING THE SPACE COMPLEXITY TO O(n) i.e TIME -> O(n) SPACE -> O(n)

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        else if (n == 2){
            return max(nums[0] , nums[1]);
        }
        
        int prev = nums[0];
        int curr = max(nums[0] , nums[1]);

        for(int i = 2 ; i < n ; i++){
            int next = max(curr ,prev +nums[i]);
            prev = curr ;
            curr = next ;
        }
        return curr;
    }
};