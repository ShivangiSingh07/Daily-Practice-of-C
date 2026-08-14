/*
Day 4 Question: 
Given an integer array arr and a target value target, find the indices of two elements whose sum equals target.  Assume exactly one valid pair exists, and the same element cannot be used twice.
Input:
arr = [2, 7, 11, 15]
target = 9

Output:
[0, 1]
*/
arr = [2, 7, 11, 15]
target = 9

for i in range(len(arr)):
    for j in range(i + 1, len(arr)):
        if arr[i] + arr[j] == target:
            print([i, j])
            break
