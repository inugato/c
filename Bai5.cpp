#include <iostream>
#include "stdio.h"
using namespace std;

int main()
{
	float Sum =0;
	int n;
	cout<<"Enter Number: "<<endl;
	cin >> n;
	for(float i=1;i<=n;i++)
	{
	  Sum =Sum+1/(2*i+1);
	}
	cout<<"Sum: "<<Sum<<endl;
	return 0; 
}
