#include <iostream>
#include "stdio.h"
#include "math.h"
using namespace std;

int main()
{
	double x;double y;double factorial;
	cout<<"Enter X: "<<endl;
	cin>>x;
	cout<<"Enter Y: "<<endl;
	cin>>y;
	factorial = pow(x,y);
	cout<<"n!: "<<factorial<<endl;
	return 0;
}
