class Solution {
public:
    string getPermutation(int n, int k) {
        string result = "";
        vector <char> numbers(n);
        for(int i = 0; i < n; i++){
            numbers[i] = ((i + 1) + '0');
        }
        vector <int> fact(n + 1);
        fact[0] = 1;
        for(int i = 1; i <= n; i++){
            fact[i] = fact[i - 1] * i;
        }
        
        k--;
        for(int i = n - 1; i >= 0; i--){
            int index = k / fact[i];
            result += numbers[index];
            for(int j = index; j + 1< numbers.size(); j++){
                    numbers[j] = numbers[j + 1];
            }
            k = k % fact[i];
        }
        return result;
    }
};
