class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int req=n/2;
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+req])
                return nums[i];
        }
        return 0;
    }
};