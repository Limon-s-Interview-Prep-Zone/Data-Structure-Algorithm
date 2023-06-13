#include <iostream>
using namespace std;

typedef struct Distance
{
    int feet;
    float inch;
} dis;

int main()
{
    Distance *ptr, d;

    ptr = &d;

    cout << "Enter feet: ";
    cin >> (*ptr).feet;
    cout << "Enter inch: ";
    cin >> (*ptr).inch;

    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches" << endl;
    cout << "Using -> = " << ptr->feet << " feet " << (*ptr).inch << " inches"; //  ptr->feet same as (*ptr).distance;

    return 0;
}