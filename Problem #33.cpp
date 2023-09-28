// Programmer is John Carl Samson 
// AM5 - BSIT
// September 28, 2023
// Skip Counting by 2s
#include<iostream>

using namespace std;

int main()
{
    float number = 0;

    cout<<number<<", ";

    while (number<198)
    {
        number = number + 2;

        cout<<number<<", ";
    }

    cout<<"200";
    return 0;
}