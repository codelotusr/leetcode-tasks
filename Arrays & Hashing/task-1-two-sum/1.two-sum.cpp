/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <vector>
#include <unordered_map>

class Solution
{
public:
    /**
     * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
     * You may assume that each input would have exactly one solution, and you may not use the same element twice.
     * You can return the answer in any order.
     *
     * @param nums The input array of integers.
     * @param target The target sum.
     * @return The indices of the two numbers that add up to the target sum.
     */
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        std::unordered_map<int, int> indexMap;
        for (int i = 0; i < nums.size(); ++i)
        {
            int complement = target - nums[i];
            if (indexMap.count(complement))
            {
                return {indexMap[complement], i};
            }
            indexMap[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end
