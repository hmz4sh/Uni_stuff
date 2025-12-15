#include <iostream>
using namespace std;

int main()
{
  int num, rem, rev = 0, temp;
  cout<<"Enter a number to check if it is a palindrome: ";
  cin>>num;
  temp = num;
  while (temp != 0)
  {
    rem = temp % 10;
    rev = (rev * 10) + rem;
    temp/=10;
  }

  if (num == rev)
  {
    cout<<"Number is palindrome\n";
  }
  else
  {
    cout<<"Number is not a palindrome\n";
  }
  return 0;

}
