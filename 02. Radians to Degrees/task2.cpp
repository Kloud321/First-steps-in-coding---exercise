#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double radians;
    double degrees;
    
    cin >> radians;
    
    degrees = radians * 180 / 3.14;
    
    
    cout << round(degrees);

    return 0;
}