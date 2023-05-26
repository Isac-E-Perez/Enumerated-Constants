# Enumerated Constants
### About
C++ also allows for enumerated constants. This means the programmer can create a new variable type and then assign a finite number of values to it. 
```c++
enum MONTH {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
```
enum variable MONTH has twelve possible values. These 12 values translate into 12 integer values. The program below demonstrates the use of the enum variable.
```c++
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
```
