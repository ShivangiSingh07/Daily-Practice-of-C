#include <stdio.h>

/*
Problem: Find the Duplicate Number

Given an array containing n + 1 integers, where each integer
is in the range [1, n], find the number that appears more than once.

The array must not be modified, and the solution should use
only O(1) extra space.

Approach: Floyd's Cycle Detection Algorithm
Time Complexity: O(n)
Space Complexity: O(1)
*/

int findDuplicate(int nums[], int numsSize)
{
    int slow = nums[0];
    int fast = nums[0];

    /* Find the intersection point of slow and fast */
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }
    while (slow != fast);

    /* Find the starting point of the cycle */
    slow = nums[0];

    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main()
{
    int nums[] = {1, 6, 3, 4, 5, 2, 2};
    int n = 7;

    printf("Duplicate number = %d\n", findDuplicate(nums, n));

    return 0;
}
