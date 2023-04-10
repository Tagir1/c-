// №9 завдання 1

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    
   const int size = 12;
   
   int m[size];
   
   for (int i=0; i<size; i++)
   {   
       m[i] = i;
       
       cout << m[i] << endl;
   }
   
   int n=12;
   for (int i=0; i<size; i++)
   {    
       n--;
       
       m[i] = n;
       
       cout << m[i] << endl;
   }
   
}
