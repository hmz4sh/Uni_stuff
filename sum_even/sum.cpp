#include<iostream>
using namespace std;

int main()
{
  int num, sum = 0;
  cout<<"Enter upper limit for sum of even numbers: ";
  cin>>num;

  for (int i = 0; i <=num; i++)
  {
    if (i % 2 != 0)
    {
      continue;
    }
    sum = sum + i;
  }

  cout<<"Sum is "<<sum;
  return 0;
}
