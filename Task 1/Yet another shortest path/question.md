You are given a directed weighted graph with P vertices, labelled from 0 to P−1. P is a prime number. You are also given an integer K.

For each vertex u, there is an edge from vertex u to vertex (K⋅u+i)modP for all 0≤i≤K−1. The weight of an edge directed from the vertex u to the vertex (K⋅u+i)modP is equal to i.

You will be given Q queries. In each query you will be given two vertices X and Y and you have to determine the minimum cost of going from X to Y. If a path does not exists between X and Y, print −1.