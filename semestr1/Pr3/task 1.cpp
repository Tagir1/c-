// 20.09   завдання 1

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
int N=99;
int x;
int y;
int z;
int k = 0;


int i = 100;
while (i<=999)
{
    
    x = N/100;
    y = N/10%10;
    z = N%100%10;
    
    
    
    if (x == z)
    {
        k=k+1;
    }
    else{}
    
     i++;
     N++;
}
    
    cout << "kilkist chusl: " << k;
}

