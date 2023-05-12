class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int pro=1;
        int x=n;
        while(x>0){
            sum+=(x%10);
            pro*=(x%10);
            x=x/10;
        }
        return (pro-sum);
    }
};