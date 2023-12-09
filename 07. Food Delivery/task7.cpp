#include <iostream>

using namespace std;

int main()
{
        int chickenMenu;
     
        int fishMenu;
        
        int vegeterianMenu;
        
        double discount;
        
        double totalSumAllMenus;
        
        double finalSum;
        
        cin >> chickenMenu >> fishMenu >> vegeterianMenu;
        
        totalSumAllMenus = chickenMenu * 10.35 + fishMenu * 12.40 + vegeterianMenu * 8.15; 
        
        discount = totalSumAllMenus * 0.20;
       
        finalSum = totalSumAllMenus + discount + 2.50;
        
        
        cout << finalSum;

    return 0;
}