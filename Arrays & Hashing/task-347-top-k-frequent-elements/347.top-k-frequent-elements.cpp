/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

class Solution
{
public:
    std::vector<int> topKFrequent(std::vector<int> &nums, int k)
    {
        std::unordered_map<int, int> frequencyMap;
        std::vector<int> result;

        result.reserve(nums.size());

        for (const auto &num : nums)
        {
            ++frequencyMap[num];
        }

        for (const auto &pair : frequencyMap)
        {
            result.emplace_back(std::move(pair.first));
        }

        std::sort(result.begin(), result.end(), [&frequencyMap](int a, int b)
                  { return frequencyMap[a] > frequencyMap[b]; });

        result.resize(k);

        return result;
    }
};
// @lc code=end
