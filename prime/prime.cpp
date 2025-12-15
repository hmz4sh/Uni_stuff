#include <iostream>
using namespace std;

int main()
{
  int num, count = 0;
  cout<<"Enter number to check if it is a prime number: ";
  cin>>num;

  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      count++;
    }
  }

  if (count == 2)
  {
    cout<<"Number is prime\n";
  }
  else
  {
    cout<<"Number is composite\n";
  }

  return 0;
}
