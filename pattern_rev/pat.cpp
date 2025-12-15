#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter rows of pattern: ";
  cin>>n;

  if (n < 0)
  {
    cout<<"Invalid Input\n";
    return 1;
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = n; j > i; j--)
    {
      cout<<"*";
    }
    cout<<endl;
  }

  return 0;
}
