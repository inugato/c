#include <iostream>
#include "stdio.h"
using namespace std;

int main()
{
	int Multiple = 1;
	int n;
	cout<<"Enter Value: "<<endl;
	cin>>n;
	for(int i= 1;i<=n;i++ )
	{
		Multiple = Multiple * i;
	}
	cout<<"Multiple: "<<Multiple<<endl;
}
