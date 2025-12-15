#include <iostream>
using namespace std;

int main()
{
  int height;
  do
  {
    cout<<"Enter height: ";
    cin>>height;
  }
  while(height < 0 && height > 9);

  for (int i = 0; i < height; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout<<j + 1<<" ";
    }
    cout<<endl;
  }

  return 0;
}
