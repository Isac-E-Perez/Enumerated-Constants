#include <iostream>
using namespace std;

int main()
{
    // Define MONTHS as having 12 possible values
    enum MONTHS {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

    // Define bestMonth as a variable type MONTHS
    MONTHS bestMonth;

    // Assign bestMonth one fo the values of MONTHS
    bestMonth = Jan;

    // Check value of bestMonths
    if(bestMonth == Jan)
    {
        cout << "I'm not so sure January is the best month\n";
    }
    else
    {
        cout << "All other months are not as great.";
    }
    return 0; 
}
