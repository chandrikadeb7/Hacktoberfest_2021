# Magic Index

## Problem: Find the magic index in an array, where array[i] = i

----

### Constraints
- Is the array sorted?
    - Yes
- Are the elements in the array distinct?
    - No
- Does a magic index always exist?
    - No
- If there is no magic index, do we just return -1?
    - Yes
- Are negative values allowed in the array?
    - Yes
- If there are multiple magic values, what do we return?
    - Return the left-most one
- Can we assume this fits memory?
    - Yes
    - 
----

## Test Cases
- None input -> -1
- Empty array -> -1
  
```
    a[ i ]  -4 -2  2  6  6  6  6 10
       i    0  1  2  3  4  5  6  7
    
    Result: 2
```
```
a[i]  -4 -2  1  6  6  6  6 10
  i    0  1  2  3  4  5  6  7

Result: 6
```
```
a[i]  -4 -2  1  6  6  6  7 10
  i    0  1  2  3  4  5  6  7

Result: -1
```

## Code
```py
class MagicIndex(object):

    def find_magic_index(self, array):
        # TODO: Implement me
        pass
```

## Unit Test
**The following unit test is expected to fail until you solve the challenge.**
```py
# %load test_find_magic_index.py
import unittest


class TestFindMagicIndex(unittest.TestCase):

    def test_find_magic_index(self):
        magic_index = MagicIndex()
        self.assertEqual(magic_index.find_magic_index(None), -1)
        self.assertEqual(magic_index.find_magic_index([]), -1)
        array = [-4, -2, 2, 6, 6, 6, 6, 10]
        self.assertEqual(magic_index.find_magic_index(array), 2)
        array = [-4, -2, 1, 6, 6, 6, 6, 10]
        self.assertEqual(magic_index.find_magic_index(array), 6)
        array = [-4, -2, 1, 6, 6, 6, 7, 10]
        self.assertEqual(magic_index.find_magic_index(array), -1)
        print('Success: test_find_magic')


def main():
    test = TestFindMagicIndex()
    test.test_find_magic_index()


if __name__ == '__main__':
    main()

```

