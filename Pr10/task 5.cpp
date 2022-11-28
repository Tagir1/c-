#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(void) {
    
    const int size = 12;
    int m[size] = {7,-2,-6,29,3,7,-8,1,14,-1,9,4};
    int max = m[0];
    int gg = 0;
    
    for (int i = 0; i < size; i++)
    {
        cout << m[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < 12; i++)
    {
        if (m[i] > max) 
        {
            gg = max; max = m[i]; 
        }
        
        else if (m[i] > gg) 
        {
            gg = m[i]; 
        }
    }
    
    cout <<  gg;  

    
}
