#include <iostream>

using namespace std;

int main()
{
  cout<<"Enter the number to print its table: ";
  int num;
  cin>>num;

  for (int i = 1; i < 11; i++)
  {
    cout<<num<<" x "<<i<<" = "<<num * i<<endl;
  }
  return 0;
}
