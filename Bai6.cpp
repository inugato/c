#include <iostream>
#include "stdio.h"
using namespace std;

int main()
{
  float sum=0;
  int n;
  cout<<"Enter Value: "<<endl;
  cin>>n;
  for(float i=1;i<=n;i++)
  {
    sum = sum + 1/(i*(i+1));
  }
  cout<<"Sum: "<<sum<<endl;
}
