class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<90;i++){
            if(pow(2,i)==n){
                return true;
                break;
            }
        }
        return false;
    }
};