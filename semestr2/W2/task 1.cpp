#include <iostream>
#include <cstdlib> 
#include <ctime>  


using namespace std;

int main() 
{
    const int size = 10;
    
    int arr[size][size];
    
    srand(time(nullptr));
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            arr[i][j] = rand() % 10;
        }
    }

    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    int *ptr = &arr[0][0];
    cout << endl;
    cout << endl;
    cout << "elements of the main diagonal:" << endl;


    for (int i = 0; i < size; i++) 
    {
        cout << *(ptr + i * size + i) << " ";
    }
    cout << endl;
    cout << endl;
    cout << "elements of the second diagonal:" << endl;

    for (int i = 0; i < size; i++) 
    {
        cout << *(ptr + i * size + (size - 1 - i)) << " ";
    }
    cout << endl;
    cout << endl;
    
    int paired = 0;
    int odd =0;
  
    for (int i = 0; i < size*size; i++) 
    {
        if(*(ptr+i)%2==0)
        {
            paired++;
        }
        else
        {
            odd++;
        }
    }
    
    cout << "paired elements" << endl;
    cout << paired << endl;
    cout << "odd elements" << endl;
    cout << odd << endl;
    
    return 0;
}
