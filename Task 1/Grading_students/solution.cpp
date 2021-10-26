#include<iostream>
#include<bits/stdc++.h>

using namespace std ;

int main(){
    int n , i;
    //cout<<"enter the number of students :: ";
    cin>>n;
    
    int g[n];
    for(i=0;i<n;i++){
        cin>>g[i];
    }

    for(i=0;i<n;i++){
        if(g[i]>=38){
            if((g[i]%5)==3){
                g[i]=g[i]+2;
            }
            if((g[i]%5==4)){
                g[i]=g[i]+1;
            }
        }
    }

    for(i=0;i<n;i++){
        cout<<g[i]<<endl;
    }
    return 0;
}