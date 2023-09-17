/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
#include <string>

class Solution
/**
 * @brief This class provides a method to check if two strings are anagrams of each other.
 */
{
public:
    /**
     * @brief Checks if two strings are anagrams of each other.
     *
     * @param s The first string.
     * @param t The second string.
     * @return true If the two strings are anagrams of each other.
     * @return false If the two strings are not anagrams of each other.
     */
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
