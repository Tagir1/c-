#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main() 
{
    double pi4 = 0.;
    long n;
    double a = 1;
    double b = 1;

    cout << "Number of iterations? ";
    cin >> n;

    for (long i = 0; i < n; i++)
    {
        pi4 = pi4 + b * (1 / a);
        a = a + 2;
        b = b * -1;
    }

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}
