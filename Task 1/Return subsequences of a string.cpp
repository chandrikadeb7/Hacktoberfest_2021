#include <iostream>
using namespace std;
/*abc subseq*/
int subs(string input,string output[] ){
     if(input.empty()){
          output[0]="";//base case it will still have an empty string
          return 1;
     }
     
     string smallString=input.substr(1);
     int smalloutput=subs(smallString,output);//recursion 
     //copying the recursion subseq again for adding a in front of them(for eg abc sub string)
     for(int i=0;i<smalloutputSize;i++){//copy all subs of recursion
        output[i+smalloutputSize] =input[0]+output[i];//smalloutputSize is 4  
        
     }
     
     return 2*smalloutputSize;
     
     
     
     
     
}
int main() {
	// your code goes here
	return 0;
	string input;
	cin>>input;
	string* output=new string [1000];
	for(int i=0;i<count;i++){
	     cout<<output[i]<<endl;
	}
}
