#include <iostream>
#include "stdio.h"
#include <math.h>
using namespace std;

int main()
{
	int n;
	double Sum =0;
	cout<<"input value: "<<endl;
	cin>>n;
	for(double i=1;i<=n;i++)
	{
	   i = pow(i,2);
	   Sum = Sum + i;
	}
	cout<<"Value: "<<Sum <<endl;
}
