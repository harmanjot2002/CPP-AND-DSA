class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums3;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m=nums1.size();
        int n=nums2.size();
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(nums1[i]==nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                i++;
            }
            while(i>0 && i<m && nums1[i]==nums1[i-1]) 
                i++;
            while(j>0 && j<n && nums2[j]==nums2[j-1]) 
                j++;
        }
        
        return nums3;
    }
};