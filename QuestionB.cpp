#include<iostream>

using namespace std;

int main()
{
	int number;
	cin>>number;
	while(number!=1)
	{
		if(number%2==0)	
		{
			cout<<number<<endl;
			number=number/2;
		}
		else
		{
			cout<<number<<endl;
			number=number*3+1;
		}
	} 
	cout<<number<<endl;
	
	return 0;
}

