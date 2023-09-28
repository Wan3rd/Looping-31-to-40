// Programmer is John Carl Samson 
// AM5 - BSIT
// September 28, 2023
// 10 x 10 stars (*)
#include<iostream>

using namespace std;

int main()
{
    for (int i = 1; i<=10; i++)
    {
        for (int j = 1; j < 10; j++) 
        {
            cout << "* ";
        }
        cout << "* " << endl;
    }
    return 0;
}   