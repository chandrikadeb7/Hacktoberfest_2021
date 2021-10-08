# Problem Statement

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

### Constraints
```
1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
```

## Example 1
### Input
```
s = "anagram", t = "nagaram"
```
### Output
```
true
```
### Explanation
```
An anagram of a string is another string that contains the same characters, only the order of characters can be different.
Here,both s = "anagram", t = "nagaram" have same characters occuring same number of times,hence s and t are anagrams.
```
## Example 2
### Input
```
s = "rat", t = "car"
```
### Output
```
false
```
### Explanation
```
An anagram of a string is another string that contains the same characters, only the order of characters can be different.
Here,s = "rat" and t = "car" have different characters t and c.Hence s and t are not anagrams.
```

## Algorithm
1. Check both string's length,if its not equal return false as number of characters must be same for anagrams.
2. Initialize an array of length 256 with all elements 0,as maximum possible characters is equal to 256.
3. Traverse the strings,increment the value of element present at the ascii value of particular character by 1,in case of strings s and decrement by 1 in case of string t.
4. If s and t are anagrams,at end all elements of the array will be 0.If it is like this,return true otherwise return false.
