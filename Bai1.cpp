#include <iostream>
#include "stdio.h"
using namespace std;

int main()
{
	int Sum = 0 ;
	int n;
	cout<<"Enter Value: "<<endl;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
	  Sum =Sum + i;
	}
	cout<<"Sum: "<<Sum<<endl;
return 0;
}
