#include <iostream>
#include <cstring>
using namespace std;

typedef struct Person
{
    int id;
    char name[25];
    int age;
    char department[20];
} person;

person getData(person);
void displayData(person);

int main()
{
    person p1, p2;
    p1.id = 12;
    strcpy(p1.name, "George Orwell");
    p1.age = 21;
    strcpy(p1.department, "Cs & EC");
    displayData(p1);

    p2 = getData(p2);
    displayData(p2);
    return 0;
}
person getData(person p)
{

    cout << "Enter Full name: ";
    cin.get(p.name, 50);

    cout << "Enter age: ";
    cin >> p.age;

    cout << "Enter id: ";
    cin >> p.id;
    cout << "Enter Department: ";
    cin.get(p.department, 20);

    return p;
}
void displayData(person p)
{
    cout << "\nDisplaying Information." << endl;
    cout << "Id: " << p.id << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Department: " << p.department;
}