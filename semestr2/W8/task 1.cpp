#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

bool isPrime(int);

int main() {
    int n;
    cout << "Enter number: "; 
    cin >> n;
    cout << "Prime number? " << isPrime(n);
    return 0;
}

bool isPrime(int x) {
    bool result = true;
    for (int i = 2; i < x; i++) 
        if (x % i == 0) result = false;
    return result;
}
