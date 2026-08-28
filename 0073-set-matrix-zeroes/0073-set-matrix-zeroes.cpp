class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
    int m = mat.size(), n = mat[0].size();
    bool firstRowZero = false, firstColZero = false;

    // check first row
    for (int j = 0; j < n; j++)
        if (mat[0][j] == 0) { firstRowZero = true; break; }

    // check first col
    for (int i = 0; i < m; i++)
        if (mat[i][0] == 0) { firstColZero = true; break; }

    // use first row/col as markers
    for (int i = 1; i < m; i++)
        for (int j = 1; j < n; j++)
            if (mat[i][j] == 0) {
                mat[i][0] = 0;
                mat[0][j] = 0;
            }

    // zero out cells based on markers
    for (int i = 1; i < m; i++)
        for (int j = 1; j < n; j++)
            if (mat[i][0] == 0 || mat[0][j] == 0)
                mat[i][j] = 0;

    // handle first row/col
    if (firstRowZero)
        for (int j = 0; j < n; j++) mat[0][j] = 0;

    if (firstColZero)
        for (int i = 0; i < m; i++) mat[i][0] = 0;
}
};