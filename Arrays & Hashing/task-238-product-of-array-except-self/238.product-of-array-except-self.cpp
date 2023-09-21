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
        std::vector<int> prefixProducts(n);
        std::vector<int> suffixProducts(n);

        prefixProducts[0] = 1;
        for (int i{1}; i < n; ++i)
            prefixProducts[i] = prefixProducts[i - 1] * nums[i - 1];

        suffixProducts[n - 1] = 1;
        for (int i{n - 2}; i >= 0; --i)
            suffixProducts[i] = suffixProducts[i + 1] * nums[i + 1];

        for (int i{0}; i < n; ++i)
            answer[i] = prefixProducts[i] * suffixProducts[i];

        return answer;
    }
};
// @lc code=end
