#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() 
{
    int pair=0, odd=0;
    int **array = new int* [3];
    for (int i=0; i<3; i++)
    {
        array[i] = new int [3];
    }

    srand(time(NULL));
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            array[i][j] = rand()%20-10;
            if(i+j<4)
            {
                cout << array[i][j] << ", ";
            }
            else
            {
                cout << array[i][j] << ".";
            }
        }
        cout << endl;
    }

    cout << "elements of the main diagonal: ";
    for(int i=0;i<3; i++) 
    {
        if (i<2)
        {
            cout << array[i][i] << ", ";
        }
        else
        {
            cout << array[i][i] << "." << endl;
        }
    }

    cout << "elements of the side diagonal: ";
    for(int i=0, j=2; i<3; i++, j--)
    {
        if (i<2)
        {
            cout << array[i][j] << ", ";
        }
        else
        {
            cout << array[i][j] << "." << endl;
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if (array[i][j]%2==0)
            {
                pair++;
            }
            else
            {
                odd++;
            }
        }
    }
    cout << "number of pair numbers: " << pair << endl;
    cout << "number of odd numbers: " << odd << endl;
  
    for (int line=0; line<3; line++)
    {
        delete [] array [line];
    }
}
