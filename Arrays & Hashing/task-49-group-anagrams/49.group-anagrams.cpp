/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution
{
public:
    /**
     * Given an array of strings, group anagrams together.
     *
     * @param strs The input array of strings.
     * @return A vector of vectors of strings, where each inner vector contains a group of anagrams.
     */
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &strs)
    {
        std::vector<std::vector<std::string>> result;
        std::unordered_map<std::string, std::vector<std::string>> map;

        for (auto &str : strs)
        {
            std::string key = str;
            std::sort(key.begin(), key.end());
            map[key].push_back(str);
        }

        for (auto &pair : map)
        {
            result.push_back(pair.second);
        }

        return result;
    }
};
// @lc code=end
