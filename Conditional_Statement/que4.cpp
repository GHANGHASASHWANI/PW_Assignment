// Q4. WAP for finding the volume of the cylinder by taking radius and height as input.
#include <iostream>
using namespace std;
int main()
{
    float radius, height, volume;
    cout << "Enter the radius of cylinder: ";
    cin >> radius;
    cout << "Enter the height of cylinder: ";
    cin >> height;
    if (radius > 0 && height > 0)
    {
        volume = (3.14) * radius * radius * height;
        cout << "Volume of cylinder: " << volume;
    }
    else{
        cout<<"Height or radius cannot be less than 0";
    }
}