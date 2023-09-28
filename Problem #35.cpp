// Programmer is John Carl Samson 
// AM5 - BSIT
// September 28, 2023
// Row of 20 stars (*)
#include<iostream>

using namespace std;

int main()
{
    int i=0;
    cout<<"Enter a number from 1-20: ";
    cin>>i;

    if (i < 1 || i > 20 )
    {
        cout<<"Number is out of range. Please enter 1-20 only"<<endl;
        main();     
    }
    else
    {
        for (int a=0; a<i; a++)
        {
            cout<<"*";
        }
    }
    return 0;
}

