class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = nums[0] + nums[1] + nums[2];

        for(int i = 0; i < nums.size() - 2; i++) {

            // skip duplicates
            if(i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i + 1;
            int k = nums.size() - 1;

            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                // update based on closeness
                if(abs(target - sum) < abs(target - ans)) {
                    ans = sum;
                }

                if(sum > target) {
                    k--;
                }
                else if(sum < target) {
                    j++;
                }
                else {
                    return sum; 
                }
            }
        }
        return ans;
    }
};