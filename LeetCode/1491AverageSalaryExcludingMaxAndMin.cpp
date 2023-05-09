class Solution {
public:
    double average(vector<int>& salary) {
       int maxv=salary[0];
       int minv=salary[0];
       double sum=0;
       for (auto s : salary) {
            sum += s;
            maxv = max(maxv, s);
            minv = min(minv, s);
        }
        return (sum - maxv - minv) / (salary.size() - 2);
    }
};