# PROBLEM STATEMENT:

You are given an array a consisting of n positive integers. Find a non-empty subset of its elements such that their sum is even (i.e. divisible by 2) or determine that there is no such subset.

Both the given array and required subset may contain equal values.

# INPUT:

The first line contains a single integer t (1≤t≤100), number of test cases to solve. Descriptions of t test cases follow.

A description of each test case consists of two lines. The first line contains a single integer n (1≤n≤100), length of array a.

The second line contains n integers a1,a2,…,an (1≤ai≤100), elements of a. The given array a can contain equal values (duplicates).

# OUTPUT:

For each test case output −1 if there is no such subset of elements. Otherwise output positive integer k, number of elements in the required subset. Then output k distinct integers (1≤pi≤n), indexes of the chosen elements. If there are multiple solutions output any of them.