class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for (int i = 0; i < n; ++i) {
            set<int> row;
            set<int> col;
            for (int j = 0; j < n; ++j) {
                row.insert(matrix[i][j]);
                col.insert(matrix[j][i]);
            }
            if (min(row.size(), col.size()) < n)
                return false;
        }
        return true;
    }
};