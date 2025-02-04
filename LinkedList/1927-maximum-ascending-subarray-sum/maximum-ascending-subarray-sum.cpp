class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int incmax=0;
        int inc = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                inc += nums[i];
                
            }
            else{
                incmax = max(inc,incmax);
                inc = nums[i];
            }
            
        }
        incmax = max(inc,incmax);
        return incmax;
        
    }
};