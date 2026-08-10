class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v(rowIndex+1);
        vector<int> ans;
        v[0].push_back(1);
        if(rowIndex == 0){
            ans.push_back(1);
            return ans;
        }
        for(int i=1; i<=rowIndex; i++){
            for(int j=0; j<i+1; j++){
                int temp=0;
                if(j == 0 || j == i){
                    temp = 1;
                }
                else{
                    temp = v[i-1][j-1] + v[i-1][j];
                }
                v[i].push_back(temp);
                if(i == rowIndex){
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};