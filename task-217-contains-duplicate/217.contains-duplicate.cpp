/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */
// @lc code=start
#include <vector>
#include <unordered_set>

/*
    Since the input is a vector of integers, we have access to the vector function to check how many total values
    the vector is storing. Sice we are trying to find out if there's duplicate values in the vector, we can use
    sets. Sets only store unique values. We are using unordered_set because it's faster and we don't care about the order.
    To get the answer we add all the values of the vector to our newly created unordered_set and then compare their sizes.
    If the vector has more values than the set, that means, that there were duplicates in the vector.
*/
class Solution
{
public:
    bool containsDuplicate(std::vector<int> &nums)
    {
        return nums.size() > std::unordered_set<int>(nums.begin(), nums.end()).size();
    }
};
// @lc code=end
