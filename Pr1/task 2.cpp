// 06.09  завдання 2 

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{

cout << "Rozvyazok ( (pow(a, 1/3.) * cos(exp(b)-1) * (M_PI/4) ) / (0.5121 * (1 - log(b/a)) ) )" << endl;

double a;
cout << "Vedit a" << endl;
cin >> a;

double b;
cout << "Vedit b" << endl;
cin >> b;

double y;
y = (double) ( (pow(a, 1/3.) * cos(exp(b)-1) * (M_PI/4) ) / (0.5121 * (1 - log(b/a)) ) );
cout << y << endl;
}
