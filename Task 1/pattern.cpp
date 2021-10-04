#include<iostream.h>
#include<conio.h>
void main()
{
	int r;

	cout<< "Enter number of rows :";
	cin>>r;

	for (int i = r;i>=1;--i)
	{
		for (int j=1;j<=i;++j)
		{
			cout<<"&";
		}
		cout<<endl;
	}
	getch();
}
