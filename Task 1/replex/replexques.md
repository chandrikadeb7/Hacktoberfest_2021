<h1>QUESTION :REPLESX</h1>
You are given an array of N integers A1,A2,…,AN and three more integers X,p, and k


An operation on the array is defined to be: replace the k-th smallest integer in the array with any integer you want.

Output the minimum number of operations you must perform on the array (possibly 0
operations) to make the p-th smallest element of the array equal to X. If it is impossible to do so output −1


Note: the k-th smallest number in an array is the k-th number from the left when the array is sorted in non-decreasing order.
<h1>Input</h1>

    The first line of the input contains a single integer T
    denoting the number of test cases. The description of T
    test cases follows.
    The first line of each test case contains four integers N,X,p,k
    respectively.
    The second line contains N
    space-separated integers A1,A2,…,AN

    .

<h1>Output</h1>

    For each test case, print a single line containing one integer ― the minimum number of operations you must perform to make X<br>
    the p-th smallest element or −1 if its impossible to do so.
<h1>Constraints</h1>
<ul>
<li>1≤T≤100</li>
<li>1≤p,k≤N</li>
<li>0≤X≤109</li>
<li>The sum of N over all test cases does not exceed 4∗105</li>
<li>0≤Ai≤109 for each valid i</li></ul>
