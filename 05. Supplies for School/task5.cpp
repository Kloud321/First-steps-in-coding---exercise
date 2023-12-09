#include <iostream>

using namespace std;

int main()
{
        int pen;
        double totalPenPrice;
        int markers;
        double totalMarkersPrice;
        int detergent;
        double totalDetergetnPrice;
        int percentDiscount;
        double discountAmount;
        
        double sum;       
        
        cin >> pen >> markers >> detergent >> percentDiscount;
        
        totalPenPrice = pen *  5.80;
        totalMarkersPrice = markers * 7.20;
        totalDetergetnPrice = detergent * 1.20;
        
        discountAmount = (totalPenPrice + totalMarkersPrice + totalDetergetnPrice) * percentDiscount / 100;
        
        sum = (totalPenPrice + totalMarkersPrice + totalDetergetnPrice) -  discountAmount;
        cout << sum;

    return 0;
}