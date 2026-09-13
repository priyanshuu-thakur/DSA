class Solution {
public:
    bool isHappy(int n) {
        long long num = 0;
        int temp = n;
        set<int> s;
        s.insert(n);
        while(1){
            while(temp){
                num += (temp%10)*(temp%10);
                temp /= 10;
            }
            if(num == 1){
                return true;
            }
            if(s.find(num) != s.end()){
                return false;
            }
            else{
                s.insert(num);
            }
            temp = num;
            num = 0;
        }
        return false;
    }
};