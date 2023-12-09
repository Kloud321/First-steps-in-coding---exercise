#include <iostream>

using namespace std;

int main()
{
        int nylon;
        double totalNylonPrice;
     
        int paint;
        double totalPaintPrice;
       
        int thinner;
        double totalthinner;
      
        int hours;
        double addtionalExpenses;
        
        double totalMaterialCost;
        double workersCost;
        double totalCost;
        
        cin >> nylon >> paint >> thinner >> hours;
        
        addtionalExpenses = (0.1 * paint) * 14.50 + 2 * 1.50 + 0.40;
        
        
        totalNylonPrice = nylon *  1.50;
        totalPaintPrice = paint * 14.50;
        totalthinner = thinner * 5;
    
        
        totalMaterialCost = totalNylonPrice + totalPaintPrice + totalthinner + addtionalExpenses;
        
        workersCost = (0.3 * totalMaterialCost) * hours;
        
        totalCost = totalMaterialCost + workersCost;
        
        cout << totalCost;

    return 0;
}