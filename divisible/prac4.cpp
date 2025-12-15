#include <iostream>
using namespace std;

int main()
{
  int lim;
  cout<<"Enter upper bound: ";
  cin>>lim;
  int sum = 0;

  for (int i = 1; i <= lim; i++)
  {
    if ((i % 5 == 0) && (i % 3 == 0))
      sum += i;
  }
  cout<<"Sum of all numbers divisible by 5 and 3, uptill upperbound "<<lim<<" is: "<<sum<<endl;
}
