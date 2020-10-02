<h2>DPAIRS</h2>
Chef has two integer sequences A1,A2,…,AN and B1,B2,…,BM. You should choose N+M−1 pairs, each in the form (Ax,By), such that the sums Ax+By are all pairwise distinct.
It is guaranteed that under the given constraints, a solution always exists. If there are multiple solutions, you may find any one.
<h3>Input</h3>
<ul>
<li>The first line of the input contains two space-separated integers N and M.</li>
<li>The second line contains N space-separated integers A1,A2,…,AN.</li>
<li>The third line contains M space-separated integers B1,B2,…,BM.</li>
</ul>
<h3>Output</h3>
Print N+M−1 lines. Each of these lines should contain two space-separated integers x and y denoting that you chose a pair (Ax+1,By+1).

<h3>Constraints</h3>
<ul>
<li>1≤N,M≤2⋅105</li>
<li>|Ai|≤109 for each valid i</li>
<li>|Bi|≤109 for each valid i</li>
<li>A1,A2,…,AN are pairwise distinct</li>
<li>B1,B2,…,BM are pairwise distinct</li>
</ul>
<h3>Example Input</h3>
3 2
<br>
10 1 100
<br>
4 3
<h3>Example Output</h3>
2 1
<br>
0 0
<br>
1 0
<br>
0 1
<h3>Explanation</h3>
The chosen pairs and their sums are:
<br>
A3+B2=100+3=103
<br>
A1+B1=10+4=14
<br>
A2+B1=1+4=5
<br>
A1+B2=10+3=13
<br>
Since all sums are distinct, this is a correct output.
