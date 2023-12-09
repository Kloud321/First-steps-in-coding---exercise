#include <iostream>

using namespace std;

int main()
{
   
   int lenght;
     
        int height;
        
    int width;
    
    double percent;
    
    long v;
    
    double totallitter;
    
    
    cin >> lenght >> height >> width >> percent;
    
    cout.setf(ios::fixed);
    cout.precision(3);
    
    
    v = (lenght * height * width) / 1000;
    

    cout <<  v << endl;
    
    
    totallitter = v - (v * (percent / 100));
    
    
    
    cout << totallitter;

return 0;

}