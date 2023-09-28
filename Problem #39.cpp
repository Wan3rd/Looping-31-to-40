// Programmer is John Carl Samson 
// AM5 - BSIT
// September 28, 2023
// Average of 10 numbers
#include<iostream>

using namespace std;

int main()
{
    int sum = 0, average, positive_numbers;
    cout<<"Input 10 positive numbers: "<<endl;
    for (int i=1; i<=10; i++)
    {
        cin>>positive_numbers;
        sum = sum + positive_numbers;
        average = sum / i;
    }
    cout<<"Average: "<<average;

    return 0;
}