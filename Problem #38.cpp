// Programmer is John Carl Samson 
// AM5 - BSIT
// September 28, 2023
// Sum of Odd Numbers from 1 through 99
#include<iostream>

using namespace std;

int main()
{
    int sum;
    for (int i=1; i<=99; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    cout<<sum;
    return 0;
}