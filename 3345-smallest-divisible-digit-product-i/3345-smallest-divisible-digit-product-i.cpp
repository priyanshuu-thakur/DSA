class Solution {
public:
    int smallestNumber(int n, int t) {
        while(1){
            int num = n;
            int product = 1;
             while(num){
                int digit = num % 10;
                product *= digit;
                num /= 10;
             }
             if(product%t==0){
                return n;
             }
             n++;
        }
        return n;
    }
};