#include<iostream>
#include<cstring>
using namespace std;
 int main()
 {
	 long long int t;
    string str1,p;
	 cin>>t;
	 cin.get();
	 while(t--)
	 { 
	 long long int  f1[27] ={0};
    cin>>str1>>p;
	string str="";
	for(int i=0; str1[i] != '\0';i++)
	{
		int index = str1[i] - 'a';
		f1[index]++;
	}
	for(int i=0;p[i] != '\0';i++)
	{
		int index = p[i] - 'a';
		f1[index]--;
	}
	str = p;
	string pre="";
	string suf ="";
	string pre1="";
	string suf1 ="";
	for(int i=0; i< 26;i++)
	{
		if(f1[i] !=0)
		{
			for(int k=1; k <= f1[i];k++)
			{
			if((char)(i+'a') < str[0])
			{
				pre+= (char)(i+'a');

			}
			else {
			suf += (char)(i+'a');
				}
			}
		}
	}
	for(int i=0; i< 26;i++)
	{
		if(f1[i] !=0)
		{
			for(int k=1; k <= f1[i];k++)
			{
			if((char)(i+'a') <= str[0])
			{
				pre1+= (char)(i+'a');

			}
			else {
			suf1 += (char)(i+'a');
				}
			}
		}
	}
	cout<<min(pre+str+suf,pre1+str+suf1)<<endl;
	 }
	 return 0;
 }