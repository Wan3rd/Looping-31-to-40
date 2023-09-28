// Programmer is John Carl Samson 
// AM5 - BSIT
// September 28, 2023
// Display User's name
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name;
    int numtimes;
    
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter number: ";
    cin>>numtimes;

    for (int ctr = 1; ctr<=numtimes; ctr++)
    {
        cout<<name<<endl;
    }
    return 0;
}