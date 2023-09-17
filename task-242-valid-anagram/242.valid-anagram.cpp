/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
#include <string>

class Solution
{
public:
    bool isAnagram(std::string s, std::string t)
    {

        int count[26] = {0};

        for (auto x : s)
            ++count[x - 'a'];

        for (auto x : t)
            --count[x - 'a'];

        for (int i = 0; i < 26; ++i)
            if (count[i] != 0)
                return false;

        return true;
    }
};
// @lc code=end
