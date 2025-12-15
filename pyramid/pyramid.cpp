#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Number of rows: ";
  cin>> n;

  if (n < 0)
  {
    cout<<"Invalid Input\n";
    return 1;
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      cout<<" ";
    }
    for (int k = 1; k <= (2 * i - 1); k++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
