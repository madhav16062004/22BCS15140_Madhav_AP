class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int element = 0;
        int traverse = 0;
        while(element < nums.size() && traverse<nums.size()){
            if(nums[element]==nums[traverse]){
                traverse++;
            }
            else{
                nums[element+1] = nums[traverse];
                element++;
                traverse++;
            }
        }
        return element+1;
        
    }
};