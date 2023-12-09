#include <iostream>

using namespace std;

int main()
{
        int pagesInBook;
        int pagesReadPerHour;
        int days;     
        double pagesReadPerDay;
        double sum;       
        
        cin >> pagesInBook >> pagesReadPerHour >> days;
        
        pagesReadPerDay = (pagesInBook / pagesReadPerHour) / days;
        
        cout << pagesReadPerDay;

    return 0;
}