class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<vector<int>> v(nums.size());
        for(int i=0; i<nums.size(); i++){
            v[0].push_back(nums[i]);
        }
        for(int i=1; i<nums.size(); i++){
            for(int j=0; j<v[i-1].size()-1; j++){
                v[i].push_back((v[i-1][j] + v[i-1][j+1])%10);
            }
        }
        return v[nums.size()-1][0];
    }
};