#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

bool isPrime(int n) 
{
    if (n < 2) 
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++) 
    {
        if (n % i == 0) 
        {
            return false;
        }
    }

    return true;
}

int main(void) 
{
    for (int i = 0; i <= 100; i++) 
    {
        if (isPrime(i))
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
