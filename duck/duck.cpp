#include <iostream>
using namespace std;

int main()
{
    long long number;

    cout<<"Enter a number to check if it is a duck number or not: ";
    cin>>number;
    long long temp = number;
    int count = 0, places = 0, total = 0; 
    while(temp > 1)
    {
        if (count < 1)
            places++;
        if (temp % 10 == 0)
        {
            count++;
        }
        temp = temp/10;
    }
    if (count > 0)
    {
        cout<<"Number is Duck Number.\n";
        cout<<"Number of zeros is: "<<count;
        cout<<"\nPlaces from right: "<<places - 1;
    }
    else
        cout<<"Number is not a Duck Number";

    return 0;
}