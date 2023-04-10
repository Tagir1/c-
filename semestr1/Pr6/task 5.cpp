// 11.10   задача  5

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    int N;
int x;
int y;
int z;
int dob;

cout << "Vedit dodatne troh znachne chislo: ";
cin >> N;

int i = 1;
while (i==1)
{
    i++;
    x = N/100;
    y = N/10%10;
    z = N%100%10;
    
    if (x %2!=0)
    {
        x = 1;
    }
    else
    {
    }
    
    if (y %2!=0 || y == 0)
    {
        y = 1;
    }
    else
    {
    }
    
    if (z %2!=0 || z == 0)
    {
        z = 1;
    }
    else
    {
    }
    
    dob = x*y*z;
    if (dob == 1)
    {
     dob = 0;   
    }
    cout << "dobutok chusl: " << dob;
}
}
