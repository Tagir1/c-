#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(void) {
    
    const int size = 12;
    int m[size] = {7,-2,-6,29,3,7,-8,1,14,-1,9,4};
    bool nul = false;

    for (int i = 0; i < 12; i++)
    {
        if (m[i] == 0) 
        {
            cout << "nul roztashovanui pid nomerom: " << i+1; nul = true;
        }
    }

    if (!nul) 
    {
        cout << "v masivi ne maye nuliv" << endl;
    }
}
