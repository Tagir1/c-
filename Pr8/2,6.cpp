#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main() 
{
    int c0;
    int steps;
    cout << "enter a number: ";
    cin >> c0;
    while (c0!=1)
    {
        if (c0 % 2==0)
        {
            c0 = c0 / 2;
        }
        else if (c0 % 2!=0)
        {
            c0 = 3 * c0+1;
        }
        cout << c0 << endl;
        steps++;
    } 
    cout << "Steps = ";
    cout << steps << endl;
   
    
}
