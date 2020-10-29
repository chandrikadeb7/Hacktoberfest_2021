/*A set is a data structure that maintains a collection of elements. The basic
operations of sets are element insertion, search and removal.
The C++ standard library contains two set implementations: The structure
set is based on a balanced binary tree and its operations work in O(logn) time.
The structure unordered_set uses hashing, and its operations work in O(1) time
on average.
The choice of which set implementation to use is often a matter of taste. The
benefit of the set structure is that it maintains the order of the elements and
provides functions that are not available in unordered_set. On the other hand,
unordered_set can be more efficient.
The following code creates a set that contains integers, and shows some of the
operations. The function insert adds an element to the set, the function count
returns the number of occurrences of an element in the set, and the function
erase removes an element from the set */

set<int> s;
s.insert(3);
s.insert(2);
s.insert(5);
cout << s.count(3) << "\n"; // 1
cout << s.count(4) << "\n"; // 0
s.erase(3);
s.insert(4);
cout << s.count(3) << "\n"; // 0
cout << s.count(4) << "\n"; // 1

/*A set can be used mostly like a vector, but it is not possible to access the
elements using the [] notation. The following code creates a set, prints the
number of elements in it, and then iterates through all the elements: */

set<int> s;
s.insert(5);
s.insert(5);
s.insert(5);
cout << s.count(5) << "\n"; // 1

/* C++ also contains the structures multiset and unordered_multiset that otherwise
work like set and unordered_set but they can contain multiple instances of
an element. For example, in the following code all three instances of the number
5 are added to a multiset: */

multiset<int> s;
s.insert(5);
s.insert(5);
s.insert(5);
cout << s.count(5) << "\n"; // 3

// The function erase removes all instances of an element from a multiset:

s.erase(5);
cout << s.count(5) << "\n"; // 0

//Often, only one instance should be removed, which can be done as follows:

s.erase(s.find(5));
cout << s.count(5) << "\n"; // 2

