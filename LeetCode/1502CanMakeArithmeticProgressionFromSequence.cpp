class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int len=arr.size();
        if(len<=2)
            return true;
        sort(arr.begin(),arr.end());
        int diff=arr[1]-arr[0];
        for(int i=1;i+1<len;i++){
            if(arr[i+1] - arr[i] != diff){
                return false;
            }
        }
        return true;
    }
};