class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int freq[n];
        int visited=-1;
        for(int i=0;i<n;i++){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                    nums[j]=visited;
                }
            }
            if(nums[i]!=visited){
                freq[i]=count;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(freq[i]==1){
                sum+=nums[i];
            }
        }
        return sum; 
        
    }
};