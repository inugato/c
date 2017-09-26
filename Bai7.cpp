#include <iostream>
#include "stdio.h"
using namespace std;

int main()
{
      int n;
      float sum = 0;
      cout<<"Enter Value: "<<endl;
      cin>> n;
      for(float i=1;i<=n;i++)
      {
	sum = sum + i / (i+1);
      }
      cout<<"Sum: "<<sum<<endl;
}
