#include <bits/stdc++.h>
using namespace std;
void print(int n,int a[64][64]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int transforms(int n,int a[64][64],int l){
    int b[l+1][l+1],i,j;
    for(i=0;i<=l;i++){
        for(j=0;j<=l;j++){
            b[i][j] = a[j][i];
        }
    }
    for(i=0;i<=l;i++){
        for(j=0;j<=l;j++){
            a[i][j] = b[i][j];
        }
    }
    //print(n,a);

}

int main(){
    int tc,n,i,j,ans,counting,flag1,flag2;
    cin >> tc;
    while(tc--){
        counting = 0;
        cin >> n;
        int a[64][64];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin >> a[i][j];
            }
        }
        for(i=1;i<n-1;i++){
            if(a[0][i]==i+1 && a[i+1][0]==i+2){
                    transforms(n,a,i);
                    //print(n,a);
                    counting++;
            }
            else if(a[i][0]==i+1 && a[0][i+1]==i+2){
                transforms(n,a,i);
                //print(n,a);
                counting++;
           }
        }


        //print(n,a);
        flag1 = 0;
        flag2 = 0;
        for(i=0;i<n;i++){
            if(a[0][i]==i+1){
                flag1++;
            }
        }
        for(i=0;i<n;i++){
            if(a[i][0]==i+1){
                flag2++;
            }
        }
        if(flag1 == n)
            cout << counting << endl;
        else if(flag2 == n)
            cout << counting +1 << endl;

    }
    return 0;
}
