class Solution {
public:
    bool canJump(vector<int>& nums) {
        int pt = 0;
        int maxi = 0;
        while(pt<nums.size()){
            if(maxi<pt){
                return false;
            }
            if(maxi<(pt+nums[pt])){
                maxi = pt+nums[pt];
            }
            if(maxi == nums.size()){
                return true;
            }
            pt++;

        }
        return true;
        
    }
};