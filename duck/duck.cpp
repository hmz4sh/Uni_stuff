#include <iostream>
using namespace std;

int main()
{
    int number;

    cout<<"Enter a number to check if it is a duck number or not: ";
    cin>>number;
    int temp = number;
    int count = 0;
    while(temp > 1)
    {
        if (temp % 10 == 0)
        {
            count++;
        }

        temp = temp/10;
    }
    if (count > 0){
        cout<<"Number is Duck Number.\n";
        cout<<"Number of zeros is: "<<count;
    }
    else
        cout<<"Number is not a Duck Number";

    return 0;
}