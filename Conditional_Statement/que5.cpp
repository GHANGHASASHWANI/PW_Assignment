// Q5. WAP to find the difference between ASCII of two characters ,take them as input .

#include <iostream>
using namespace std;
int main()
{
    char ch1, ch2;
    int difference;

    cout << "Enter any two character: ";
    cin >> ch1 >> ch2;

    ch1 = (int)ch1;
    ch2 = (int)ch2;

    difference = ch2 - ch1;

    if (difference > 0)
    {
        cout << "Difference of " << difference << " characters";
    }
    else if (difference == 0)
    {
        cout << "Same characters so Zero difference";
    }
    else
    {
        cout << "Difference of " << -difference << " characters";
    }
}