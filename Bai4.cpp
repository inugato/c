#include <iostream>
#include "stdio.h"
using namespace std;

int main()
{
	   int n;
	   float sum = 0 ;
	   cout<<"Input Number: "<<endl;
	   cin>>n;
	   for(float i=1;i<=n;i++)
	   {
	      sum = sum + 1/(2*i);
	   }
	cout<<"Sum :"<<sum<<endl;
	return 0;
}
