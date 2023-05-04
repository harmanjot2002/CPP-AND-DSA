#include <algorithm>
class Solution {
public:
    int trap(vector<int>& height) {
        int len=height.size();
        // vector<int> lmax;
        // vector<int> rmax;
        int lmax[len];
        int rmax[len];
        lmax[0]=height[0];
        for(int i=1;i<len;i++){
            lmax[i]=max(lmax[i-1],height[i]);
        }
        rmax[len-1]=height[len-1];
        for(int i=len-2;i>=0;i--){
            rmax[i]=max(rmax[i+1],height[i]);
        }
        int sum=0;
        for(int i=1;i<len-1;i++){
            sum=sum+(min(lmax[i],rmax[i])-height[i]);
        }
        cout << sum;
        return sum;
    }
}; 