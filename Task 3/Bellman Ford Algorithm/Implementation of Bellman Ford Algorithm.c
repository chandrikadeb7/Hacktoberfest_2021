#include<stdio.h>

int v,e, src;

int g[10][3];// Matrix of the form source vertex, destination vertex, weight of the edge

void bellman( int g[10][3], int v, int e, int src)
 {
     int dis[10];

     for(int i=0;i<v; i++)
        {dis[v]=1000; // Set the path of all the vertices to infinity
        }

     dis[src]=0; // Set the path of first(initial) vertex to 0

     for(int i=0;i<v-1;i++)
     {
         for(int j=0;j<e-1;j++)
         {
             if(  dis[g[j][0]] + g[j][2] < dis[g[j][1]] )
             {
                 dis[g[j][1]]= dis[g[j][0]] + g[j][2];
             }
         }
     }



     printf("\n Distance from source:\n");

     for(int i=0;i<v;i++)
     {
         printf("\n%d : %d", i, dis[i]);
     }
 }

 void main()
 {
     printf("\n Enter no. of vertices:");
     scanf("%d", &v);

     printf("\n Enter no. of edges");
     scanf("%d", &e);

     printf("\n graph:");


     for(int i=0; i<e; i++)
         for(int j=0;j<3;j++)
     {
            scanf("%d", &g[i][j]);
     }

     bellman( g, v,e, 0);

 }

