#include <iostream>
#include <algorithm>
using namespace std;

bool checkPalindrome(string str){
    int len = str.size();
    string str1 = "";
    string str2 = "";
    
    for(int i=0;i<len/2;i++)
        str1+=str[i];
        
    if(len%2 == 0){
        for(int i=len/2;i<len;i++)
            str2+=str[i];
    }
    else{
        for(int i=(len/2)+1;i<len;i++)
            str2+=str[i];
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    return (str1.compare(str2) == 0);
}

int main() {
	string str;
	int test;
	cin >> test;
	while(test--){
	    cin >> str;
	    if(checkPalindrome(str))
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	}
	return 0;
}
