#include <iostream>

using namespace std;

int main()
{
        int annualPaymnet;
     
        double sneakersCost;
        
        double outfitCost;
        
        double ballCost;
        
        double accessoriesCost;
        
        double totalSumAll;
        

        cin >> annualPaymnet;
        
        
        sneakersCost =  0.6 * annualPaymnet;
       
       
        outfitCost = sneakersCost - 0.2 * sneakersCost;
        
        
        ballCost = outfitCost / 4;
      
        
        accessoriesCost = ballCost / 5;
        
        
        
        totalSumAll = annualPaymnet + sneakersCost + outfitCost  + ballCost + accessoriesCost;
    
        
        cout << totalSumAll;

    return 0;
}
