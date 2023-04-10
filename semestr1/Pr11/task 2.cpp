#include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main() 
{
    int m=6;
    int n=4;
    int parne[n];
    int arr[m][n];
    
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        parne[i] = 0;
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]= rand()%50;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (arr[i][j] == 0){}
            else if(arr[i][j]%2==0)
            {
                parne[j]++;
            }
        }
    }
    for(int j=0;j<n;j++)
    {
        cout << j+1 << " stovpchik maye " << parne[j] << " parnih chusla" << endl;
    }
}
