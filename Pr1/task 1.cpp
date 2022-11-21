// 06.09  завдання 1 

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{

cout << "Rozvyazok ( 0.75*pow(b, 1/2.) - 1/2 * pow(a, 1/3.)) sin(b * (M_PI/3))" << endl;

double a;
cout << "Vedit a" << endl;
cin >> a;

double b;
cout << "Vedit b" << endl;
cin >> b;

double y;
y = (double) ( 0.75*pow(b, 1/2.) - pow(a, 1/3.)/2) * sin(b * (M_PI/3));
cout << "rezyltat: " << y << endl;
cout << y << endl;
}


