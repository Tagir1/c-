#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(void) {
    
    const int size = 12;
    int m[size] = {7,-2,-6,29,3,7,-8,1,14,-1,9,4};
    
    for (int i = 0; i < size; i++)
    {
        cout << m[i] << " ";
    }
    cout << endl;
    
    

    for (int i = 0; i < size; i++)
    {
        if (m[i] < 0)
        {
            m[i] = 0;
        }
        cout << m[i] << " ";
    }
}
