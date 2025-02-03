class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int dec= 1;
        int inc = 1;
        int incmax = 1;
        int decmax= 1;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                inc++;
                incmax = max(incmax,inc);
            }
            else{
                inc = 1;
            }
        }

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                dec++;
                decmax = max(decmax,dec);
            }
            else{
                dec = 1;
            }
        }

        return max(incmax,decmax);
        
    }
};