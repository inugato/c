#include <iostream>
#include "stdio.h"
using namespace std;

int main()
{
	int n;
	float Sum =0;
	cout<<"please input n: "<<endl;
	cin>>n;
	for(float i=1;i<=n;i++)
	{
	  Sum =Sum + 1/i;
	}
	cout<<"Sum: "<<Sum<<endl;
}
