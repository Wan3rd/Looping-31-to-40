// Programmer is John Carl Samson 
// AM5 - BSIT
// September 28, 2023
// Sum of 1, 1/2, 1/3, ... 100 (*)
#include<iostream>

using namespace std;

int main()
{
    double sum = 0.0;

    for (int i = 1;i<=100;i++)
    {
        sum += 1.0 /i;
    }
    cout<<"The sum of the series is: "<<sum<<endl;
    return 0;
}
