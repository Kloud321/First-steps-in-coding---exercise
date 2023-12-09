#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double deposit;
    int depositPeriod;
    double interest;
    
    double sum;
    
    cin >> deposit >> depositPeriod >> interest;
    
    sum = deposit + depositPeriod * ((deposit * (interest / 100)) / 12);
    
    cout << sum;

    return 0;
}