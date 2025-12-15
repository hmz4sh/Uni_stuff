#include <iostream>
using namespace std;

int main()
{
  int num, fact;
  cout<<"Enter number to calculate factorial: ";
  cin>>num;
  if (num < 1) {
    cout<<"Invalid Input, try again, exiting\n";
    return 1;
  }
  fact = num;
  for (int i = num - 1; i > 0; i--)
  {
    fact *= i;
  }

  cout<<"The factor of "<<num<<" is "<<fact<<endl;

  return 0;
}
