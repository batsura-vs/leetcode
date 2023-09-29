/*
 * Solution for 896. Monotonic Array
 * https://leetcode.com/problems/monotonic-array/
 *
 */

#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        if (nums.size() == 1)
            return true;

        bool isIncreasing = nums[0] <= nums[nums.size() - 1];
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (!(isIncreasing && (nums[i] <= nums[i + 1]) ||
                  !isIncreasing && (nums[i] >= nums[i + 1])))
                return false;
        }
        return true;
    }
};