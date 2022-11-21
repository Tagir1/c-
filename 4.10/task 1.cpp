// 4.10   завдання 1

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    for (int i=0; i<=5; i++)
    {
        
        int x;
        cout << "vvedit chuslo: "; 
        cin >> x;

        double y;
        y = (double) pow(sin(x),5) + fabs(5*x - 1.5);
        cout << "vidpovid: " << y << endl;
    }
}
