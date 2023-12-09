#include <iostream>

using namespace std;

int main()
{
    double usd;
    double exchangeVar;

    cin >> usd;
    
     exchangeVar = usd * 1.79549;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    
    cout << exchangeVar << endl;

    return 0;
}

