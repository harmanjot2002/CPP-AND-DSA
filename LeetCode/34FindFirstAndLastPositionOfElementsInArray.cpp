class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1,last=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                first=i;   
                break;             
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                last=i;                
            }
        }
        return {first,last};
    }
};