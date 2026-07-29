class Solution {
public:
    double trimMean(vector<int>& arr) {
        double sum = 0;
        int n = arr.size();
        int rem = n*0.05;
        int div = n - 2*rem;
        sort(arr.begin(),arr.end());
        for(int i = rem; i<(n-rem); i++){
            sum += arr[i];
        }
        return sum/div;
    }
};