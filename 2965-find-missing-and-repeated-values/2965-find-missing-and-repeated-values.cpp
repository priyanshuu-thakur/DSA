class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& nums) {
        long long n = 1LL * nums.size() * nums.size();
        long long sum = n * (n + 1) / 2;
        long long numsSum = 0;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                v.push_back(nums[i][j]);
                    numsSum += nums[i][j];
            }
        }
        sort(v.begin(),v.end());
        int n1 = 0;
        for(int i=0; i<v.size()-1; i++){
            if( v[i] == v[i+1]){
                n1 = v[i];
                break;
            }
        }
        int n2 = sum - (numsSum - n1);
        return {n1,n2};
    }
};