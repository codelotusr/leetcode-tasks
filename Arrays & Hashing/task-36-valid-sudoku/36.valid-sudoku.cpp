/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */

// @lc code=start
#include <vector>
#include <unordered_map>

class Solution
{
public:
    bool isValidSudoku(std::vector<std::vector<char>> &board)
    {
        std::unordered_map<char, int> row[9], col[9], subBox[9];
        char c;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                c = board[i][j];
                if ((c != '.') && (0 < row[i][c]++ || 0 < col[j][c]++ || 0 < subBox[i / 3 * 3 + j / 3][c]++))
                    return false;
            }
        }
        return true;
    }
};
// @lc code=end
