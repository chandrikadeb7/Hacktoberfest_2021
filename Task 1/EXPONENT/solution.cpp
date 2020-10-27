#include "bits/stdc++.h"
#include "boost/multiprecision/cpp_int.hpp"
namespace mp = boost::multiprecision;
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    mp::cpp_int m,n,ans = 0,f = 1;

    cin >> m >> n;

    for(mp::cpp_int i=1;i<=n;i++){

        f = f*i;
    }

    while((f%m) == 0){

        f = f / m;
        ans = ans + 1;
    }
    cout << ans << endl;
} 
