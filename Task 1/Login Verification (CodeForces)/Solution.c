#include<stdio.h>
#include<string.h>
int main()
{   char str1[51],str2[51];
    int flag1=0,flag2=0,n,chr1,chr2,i,j;
    scanf("%s",str1);
    scanf("%d",&n);
    int arr[n];
    for(j=0;j<n;j++)
    {   scanf("%s", str2);
        for(i=0; i<strlen(str1); i++)
        {   chr1=str1[i];
            chr2=str2[i];
            if(strlen(str1)!=strlen(str2))
                flag2=1;
            else if(str1[i]=='0' || str1[i]=='o' || str1[i]=='O')
            {   if(str2[i]=='0' || str2[i]=='o' || str2[i]=='O')
                    continue;
                else
                    flag2=1;
            }
            else if(str1[i]=='1' || str1[i]=='l' || str1[i]=='L' || str1[i]=='i' || str1[i]=='I')
            {   if(str2[i]=='1' || str2[i]=='l' || str2[i]=='L' || str2[i]=='i' || str2[i]=='I')
                    continue;
                else
                    flag2=1;
            }
            else if(chr1==chr2)
                continue;
            else if(chr1>=65 && chr1<=90 || chr1>=97 && chr1<=122)
            {   if(chr1-chr2==32||chr1-chr2==0||chr1-chr2==-32)
                    continue;
                else
                    flag2=1;
            }
        }
        arr[j]=flag2;
        flag2=0;
    }
    for(i=0; i<n; i++)
    {   if(arr[i]==0)
        {   flag1=1;
            break;
        }
        else
            continue;
    }
    if(flag1==1)
        printf("No");
    else
        printf("Yes");
}
