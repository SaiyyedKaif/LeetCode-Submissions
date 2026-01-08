class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int max_w = 0 ;
        int l = 0 ;
        int nums_zeros = 0;
        int n = nums.size();

        for(int r = 0; r < n ; r++){
            if(nums[r]==0){
                nums_zeros++;
            }

            while(nums_zeros >k){
                if(nums[l]==0){
                    nums_zeros--;
            }
            l++;
            }
            max_w = max(max_w , r-l+1 );
        }
        return max_w;
    }
};