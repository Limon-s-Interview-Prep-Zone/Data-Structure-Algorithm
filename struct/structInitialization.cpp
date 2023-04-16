#include <iostream>
#include <string.h>

using namespace std;
/* struct: it is a collection of variables can have different types of variables under a single name */

// craeting struct
struct Student
{
    int id;
    string semester;
};

// create struct with person1 variable
struct Person
{
    char name[50];
    int citNo;
    float salary;
} person1, person2;

typedef struct Employee // typedf create an alias.
{
    struct Person person1;
    int totalHour;
} employee;
int main()
{
    struct Student s1, s2; // creating struct variable

    s1.id = 14203165; // . = access struct member
    s1.semester = "Spring";
    cout << "Student 1 with Id= " << s1.id << "\t Semester: " << (s1.semester) << endl;
    cout << "Student 2 with Id= " << s2.id << endl;

    // assign value to name of person1
    strcpy(person1.name, "George Orwell"); // strcpy(destination, souces); stl library to copy string value.

    // assign values to other person1 variables
    person1.citNo = 1984;
    person1.salary = 2500;
    cout << person1.citNo << endl;

    person2.salary = 40000;
    cout << person2.salary << endl;

    employee e1, e2;
    e1.totalHour = 12;
    e1.person1.salary = 1452;// neasted struct
    cout << e1.person1.salary << endl;
    cout << e1.totalHour << endl;

    e2.totalHour=1000;
    cout<<"Total Hour: "<<e2.totalHour<<endl;
    return 0;
}