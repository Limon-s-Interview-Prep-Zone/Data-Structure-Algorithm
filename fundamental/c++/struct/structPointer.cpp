#include <iostream>
using namespace std;

// declare struct
struct Distance
{
    int latitude;
    int longitude;
};

typedef struct Person
{
    string name;
    int age;
    Person *friendPtr;
} p;

int main()
{
    struct Distance *ptr, d;
    ptr = &d; // ptr point the address of d
    (*ptr).latitude = 202;
    d.longitude = 303;
    cout << (*ptr).latitude << "  " << endl;
    cout << ptr->longitude << "  " << endl; // 303 ->

    cout << " using point in the strct" << endl;
    p p1, p2;
    p1.name = "Limon";
    p2.age = 25;

    p2.name = "Likhon";
    p2.age = 23;

    std ::cout << p2.name << " and " << p2.friendPtr->name << "are good friends" << endl;

    return 0;
}