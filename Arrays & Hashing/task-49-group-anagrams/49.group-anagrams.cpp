/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
#include <vector>
#include <string>
#include <unordered_map>

class Solution
{
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &strs)
    {
        std::vector<std::vector<std::string>> result;
        std::unordered_map<std::string, std::vector<std::string>> map;

        for (auto &str : strs)
        {
            std::string key = str;
        }
    }
};
// @lc code=end
