class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool pos = false;
        int missing;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<1){
                continue;
            }
            if(nums[i] == 1){
                pos = true;
                missing = 2;
                continue;
            }
            if(pos == false){
                return 1;
            }
            if(nums[i]==missing){
                missing++;
            }
            else if(nums[i] == missing -1){
                continue;
            }
            else{
                return missing;
            }
        }
        return missing;
    }
};