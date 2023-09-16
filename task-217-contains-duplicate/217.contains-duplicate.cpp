/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */
// @lc code=start
#include <vector>
#include <unordered_set>
class Solution
{
public:
    bool containsDuplicate(std::vector<int> &nums)
    {
        return nums.size() > std::unordered_set<int>(nums.begin(), nums.end()).size();
    }
};
// @lc code=end
