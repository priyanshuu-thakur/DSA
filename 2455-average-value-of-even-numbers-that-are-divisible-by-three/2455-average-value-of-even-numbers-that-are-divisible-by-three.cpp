class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0;
        int total = 0;
        for(int x : nums){
            if(x%3==0 && x%2==0){
                sum += x;
                total++;
            }
        }
        if(sum == 0) return 0;
        return sum/total;
    }
};