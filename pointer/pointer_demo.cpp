#include <iostream>
using namespace std;
void pointerInit()
{
    int a = 12;
    // declare pointer
    int *b;
    // assign address of var a to pointer b
    b = &a;

    int **c = &b;
    cout << "C:" << c << "\tValue:" << **c << endl;
    // print address of b&a
    cout << "Address of b:" << b << "\tAddress of a:" << &a << endl;
    cout << "Access value of b(*b):" << *b << endl;
}

void changePointerValue()
{
    int a = 12;
    int *b = &a;
    cout << "Value of a:" << a << "\t Value of b: " << *b << endl; // this will print the memory location of a given variable
    *b = 100;

    cout << "B:" << *b << "\t A: " << a << endl;
    *b = 200;
    cout << "B:" << *b << "\t A: " << a << endl;
}
void pointerDemo()
{
    int firstvalue = 5, secondvalue = 15;
    // int *p1, *p2;

    int *p1 = &firstvalue;  // p1 = address of firstvalue
    int *p2 = &secondvalue; // p2 = address of secondvalue
    *p1 = 10;               // value pointed to by p1 = 10
    *p2 = *p1;              // value pointed to by p2 = value pointed to by p1
    // cout << "firstvalue is " << firstvalue << "\tP1:" << p1 << "\t *P1=" << *p1 << "\tP2:" << p2 << "\t *P2=" << *p2 << '\n';
    p1 = p2; // p1 = p2 (value of pointer is copied)
    // cout << "firstvalue is " << firstvalue << "\tP1:" << p1 << "\t *P1=" << *p1 << "\tP2:" << p2 << "\t *P2=" << *p2 << '\n';
    *p1 = 20; // value pointed to by p1 = 20

    cout << "firstvalue is: " << firstvalue << "\tP1:" << p1 << "\t *P1=" << *p1 << '\n';
    // cout << "secondvalue is " << secondvalue << "\tP2:" << p2 << "\t *P2=" << *p2 << '\n';
}
void pointerWithArray()
{
    float arr[5] = {1, 2, 3, 4, 5};
    float *ptr = arr; // points the arr[0] elements address
    cout << ptr << endl;

    cout << "Displaying address using arrays: " << endl;
    for (int i = 0; i < end(arr) - begin(arr); i++)
    {
        cout << "&arr[" << i << "]: " << &arr[i] << "\t value= " << *(arr + i) << endl;
    }

    cout << "Displaying address using Pointers: " << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << "ptr + " << i << ": " << ptr + i << "\t value= " << *(ptr + i) << endl;
    }
}

void pointerIO()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the " << i + 1 << " int value: ";
        // store the input value
        cin >> *(arr + i);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "a[" << i << "]: " << *(arr + i) << endl;
    }
}

int main()
{
    // declare pointer
    // pointerInit();
    // changing pointer value
    changePointerValue();
    pointerDemo();

    // pointerWithArray();
    // pointerIO();

    return -1;
}