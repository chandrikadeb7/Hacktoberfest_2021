#include <bits/stdc++.h>

using namespace std;

int main(){
    // variable g is the number of games
    int g;
    cin >> g;

    for (int i = 0; i < g; i++){
        // variable n is the number of integers in stack A
        // variable m is the number of integers in stack B
        // variable x is the number that the sum of the integers removed from the two stacks cannot exceed
        int n,m,x;
        cin >> n >> m >> x;

        vector<int> A(n);
        vector<int> B(m);
        int vector_a = 0, vector_b = 0;

        for (int j = 0; j < n; j++){
            cin >> A[j];
        }

        for (int k = 0; k < m; k++){
            cin >> B[k];
        }

        int index_a = 0, index_b = 0;
        int sum = 0, temp = 0, index_sum = 0;

        while (index_a < n && sum + A[index_a] <= x){
            sum += A[index_a];
            index_a++;
         }

        index_sum = index_a;

        while (index_b < m && index_a >= 0){
            sum += B[index_b];
            index_b++;

            while(sum > x && index_a > 0){
                index_a--;
                sum -= A[index_a];
            }

            if(sum <= x && index_a + index_b > index_sum){
                index_sum = index_a + index_b;
            }
        }    
        printf("%d\n", index_sum);
    }
    return 0;
} 