#include <iostream>
using namespace std;

int main()
{
  int lim;
  cout<<"Enter limit for fibonacci series: ";
  cin>>lim;
  int a = 0, b = 1,next;
  for (int i = 1; i < lim; i++)
  {
    if (i == 1)
    {
      cout<<a<<" ";
    }
    else if (i == 2)
    {
      cout<<b<<" ";
    }
    else
    {
      next = a + b;
      cout<<next<<" ";
      a = b;
      b = next;
    }
  }
  cout<<endl;
  return 0;
}
