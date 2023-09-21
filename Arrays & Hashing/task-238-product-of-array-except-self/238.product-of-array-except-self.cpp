/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
#include <vector>

class Solution
{
public:
    std::vector<int> productExceptSelf(std::vector<int> &nums)
    {
        int n = nums.size();
        std::vector<int> answer(n);

        answer[0] = 1;

        for (int i{1}; i < n; ++i)
            answer[i] = answer[i - 1] * nums[i - 1];

        int right = 1;

        for (int i{n - 1}; i >= 0; --i)
        {
            answer[i] *= right;
            right *= nums[i];
        }

        return answer;
    }
};
// @lc code=end
