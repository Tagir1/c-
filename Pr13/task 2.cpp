#include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

struct Date
{
    int hours;
    int minutes;
};

int main() 
{
    Date date1;
    Date date2;
    Date nextDate;
    
    
    
    cout << "Enter first hours:";
    cin >> date1.hours;
    cout << "Enter first minutes:";
    cin >> date1.minutes;
    cout << "Enter second hours:";
    cin >> date2.hours;
    cout << "Enter second minutes:";
    cin >> date2.minutes;
    
    
    nextDate.hours = date2.hours - date1.hours;
    nextDate.minutes = date2.minutes - date1.minutes;
    
    
    if(nextDate.hours<0)
    {
        nextDate.hours=24+nextDate.hours;
    }
    if(nextDate.minutes<0)
    {
        nextDate.minutes=60+nextDate.minutes;
        nextDate.hours--;
    }
    
    
    if (nextDate.minutes<10)
    {
        cout << nextDate.hours << ":" << "0" << nextDate.minutes << endl;
    }
    else
    {
        cout << nextDate.hours << ":" << nextDate.minutes << endl;
    } 
}
