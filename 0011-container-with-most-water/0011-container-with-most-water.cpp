class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0, r = h.size()-1;
        int water = 0;
        int lmax = 0, rmax = 0;
        while(l<=r){
            if(h[l]<h[r]){
                lmax = max(lmax,h[l]);
                water = max(water,lmax*(r-l));
                l++;
            }
            else{
                rmax = max(rmax,h[r]);
                water = max(water,rmax*(r-l));
                r--;
            }
        }
        return water;
    }
};