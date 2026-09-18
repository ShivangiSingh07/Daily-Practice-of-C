#include <stdio.h>

/*
Question:
Given an integer array sorted in non-decreasing order,
square every element and return the squares in sorted order
without sorting the array again.

Example:
Input:  {-4, -1, 0, 3, 10}
Output: {0, 1, 9, 16, 100}

Time Complexity: O(n)
*/

void sortedSquares(int a[], int n, int result[])
{
    int left = 0;
    int right = n - 1;
    int pos = n - 1;

    while (left <= right)
    {
        int leftSquare = a[left] * a[left];
        int rightSquare = a[right] * a[right];

        if (leftSquare > rightSquare)
        {
            result[pos] = leftSquare;
            left++;
        }
        else
        {
            result[pos] = rightSquare;
            right--;
        }

        pos--;
    }
}

int main()
{
    int a[] = {-4, -1, 0, 3, 10};
    int n = 5;
    int result[5];

    sortedSquares(a, n, result);

    printf("Sorted squares: ");

    for (int i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}
