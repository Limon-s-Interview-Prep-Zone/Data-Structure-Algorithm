#include <iostream>
#include <string.h>

using namespace std;
/* struct: it is a collection of variables can have different types of variables under a single name */
struct Student
{
    int id;
    string studentName;
};

struct Department
{
    char name[50];
    string code;
    float salary;
} dept; // creating a person1 variable;

typedef struct Grade
{
    int gradeId;
    string grade;
    struct Student stu;
} grad;
int main()
{
    struct Student s1, s2;
    s1.id = 1;
    s1.studentName = "limon";
    s2.id = 2;
    cout << s1.id << endl;

    strcpy(dept.name, "Software desiging");
    dept.salary = 10000.00;
    dept.code = "cs-250";
    cout << "Dept-1 information ->" << dept.name << " code: " << dept.code << endl;

    struct Department dept1;
    strcpy(dept1.name, "CSE");
    dept1.code = "cs-231";
    dept1.salary = 20000.00;

    cout << "Dept-2 information ->" << dept1.name << " code: " << dept1.code << endl;

    cout << "nested struct" << endl;
    grad g1, g2;
    g1.gradeId = 101;
    g1.stu.studentName = "Limon";
    g2.gradeId = 202;
    cout << g1.gradeId << endl;
    cout << g1.stu.studentName << endl;
    return 0;
}