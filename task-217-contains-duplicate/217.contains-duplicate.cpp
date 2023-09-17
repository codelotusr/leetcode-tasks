/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */
// @lc code=start
#include <vector>
#include <unordered_set>
class Solution
/**
 * @brief Checks if a vector of integers contains any duplicates.
 *
 * @param nums The vector of integers to check for duplicates.
 * @return true If the vector contains duplicates.
 * @return false If the vector does not contain duplicates.
 */
{
public:
    bool containsDuplicate(std::vector<int> &nums)
    {
        return nums.size() > std::unordered_set<int>(nums.begin(), nums.end()).size();
    }
};
// @lc code=end
