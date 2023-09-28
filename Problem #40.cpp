// Programmer is John Carl Samson 
// AM5 - BSIT
// September 28, 2023
// Sum of Digits of a number
#include <iostream>

using namespace std;

int main()
{
    int number, sum = 0, digit;

    cout<<"Enter a number from 100 - 9999: ";
    cin>>number;

    if (number >= 100 && number <= 9999) 
    {
        while (number > 0) 
        {
            digit = number % 10;      // Extract the last digit
            sum += digit;             // Add the digit to the sum
            number /= 10;            // Remove the last digit
        }
    }
    else
    {
        cout<<"Invalid Input";
        return 1;
    }
    cout<<"Sum of Digits: "<<sum;

    return 0;
}