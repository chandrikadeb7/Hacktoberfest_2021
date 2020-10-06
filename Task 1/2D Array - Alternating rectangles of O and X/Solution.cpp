#include<iostream>
using namespace std;
int main()
{
  int m, n;
  cin>>m>>n;
  if(n>=1 && m <= 1000 && m>=1 && n<=1000)
  {
    int i, j, k=0, p=0, checkr=0, checkc=0;
    char mat[m][n];

        for (i=1; i<=m; i++)
        {
            p=0;
            checkc=0;
            for(j=1; j<=n; j++)
            {
                if((checkr==0 && j>=k+1 && j<=n-k) || (checkc==0 && i>=p+1 && i<m-p))
                {
                    mat[i][j]='X';
                    cout<<mat[i][j];
                }
                else
                {
                    mat[i][j]='0';
                    cout<<mat[i][j];
                }
                if(n%2==0)
                {
                    if(j<n/2)
                        p++;
                    else if(j==n/2)
                        p=p;
                    else
                        p--;
                }
                else if(n%2==1)
                {
                    if(j<(n+1)/2)
                        p++;
                    else
                        p--;
                }
                if(n%2==0 && j==n/2)
                    checkc=checkc;
                else
                    checkc=1-checkc;
                if(j<=n-1)
                    cout<<" ";
            }
            if(m%2==0)
            {
                if(i<m/2)
                    k++;
                else if(i==m/2)
                    k=k;
                else
                    k--;
            }
            else if(m%2==1)
            {
                if(i<(m+1)/2 )
                    k++;
                else
                    k--;
            }

            if(m%2==0 && i==m/2)
                checkr=checkr;
            else
                checkr=1-checkr;
            if(i<=m-1)
                cout<<"\n";
        }

    return 0;
  }
}
