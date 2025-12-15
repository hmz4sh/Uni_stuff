#include <iostream>
using namespace std;

int main()
{
  int num;
  cout<<"Enter a three digit number to calculate sum of each digit: ";
  cin>>num;
  int f_digit = num / 100, s_digit = (num / 10) - (f_digit * 10), t_digit = num - (f_digit  * 100) - (s_digit * 10);

  cout<<f_digit<<" "<<s_digit<<" "<<t_digit<<endl;
  cout<<"Sum of digits is "<<f_digit + s_digit + t_digit<<endl;
  return 0;
}
