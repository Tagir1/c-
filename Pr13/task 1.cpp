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
    Date date;
    int addMinutes;
    
    cout << "Enter hours:";
    cin >> date.hours;
    cout << "Enter minutes:";
    cin >> date.minutes;
    cout << "Enter time in minutes:";
    cin >> addMinutes;
    
    date.minutes += date.hours*60+addMinutes;
    date.hours = date.minutes/60;
    date.minutes -= date.hours*60;
    
    while(date.hours>=24)
    {
        date.hours-=24;
    }
    
    if (date.minutes<10)
    {
        cout << date.hours << ":" << "0" << date.minutes << endl;
    }
    else
    {
        cout << date.hours << ":" << date.minutes << endl;
    } 
}
