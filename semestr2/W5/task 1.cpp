#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
int main() 
{
    const int size = 16;
    float *arr = new float [size];
    int pair=0, odd=0;
    
    srand(time(NULL));
  
    for (int i=0; i<size; i++)
    {
        arr[i] = 0.1*(rand()%40-20);
        if(arr[i]>0)
        {
            pair++;
        }
        else if(arr[i]<0)
        {
            odd++;
        }
        if(i<size - 1)
        {
            cout << arr[i] << ", ";
        }
        else
        {
            cout << arr[i] << "." << endl;
        }
    }
    cout << "pair: " << pair << endl << "odd: " << odd;
    delete [] arr;
}
