#include <iostream>
using namespace std;
void pointerInit()
{
    int a = 12;
    // declare pointer
    int *b;// pointer only store variable address
    // assign address of var a to pointer b
    b = &a; // reference 

    int **c = &b;
    cout << "C:" << c << "\tValue:" << **c << endl;
    // print address of b&a
    cout << "Address of b:" << b << "\tAddress of a:" << &a << endl;
    cout << "Access value of b(*b):" << *b << endl;
}

void changePointerValue()
{
    int a = 12, b = 14;
    int *c = &a;
    int *d = &b;
    cout << "Value of a:" << *c << "\t Value of b: " << *d << endl; // this will print the memory location of a given variable
    *c = 100;

    cout << "*C:" << *c << "\t A: " << a << endl;
    
    cout << "*D:" << *d << "\t B: " << b << endl;
}
void changePointerValue_2()
{
    int firstvalue = 5, secondvalue = 15;

    int *p1 = &firstvalue;  // p1 = address of firstvalue
    int *p2 = &secondvalue; // p2 = address of secondvalue
    cout<<"Adress:"<<"&firstvalue= "<<&firstvalue<<"\t&secondvalue= "<<&secondvalue<<"\tp1="<<p1<<"\tp2="<<p2<<endl;
    cout<<"Value:"<<"firstvalue= "<<firstvalue<<"\tsecondvalue= "<<secondvalue<<"\tp1="<<*p1<<"\tp2="<<*p2<<endl;

    *p1 = 10;               // value pointed to by p1 = 10
    *p2 = *p1;              // value pointed to by p2 = value pointed to by p1
    cout<<"After:"<<"firstvalue= "<<&firstvalue<<"\tsecondvalue= "<<&secondvalue<<"\tp1="<<p1<<"\tp2="<<p2<<endl;
    cout<<"Value:"<<"firstvalue= "<<firstvalue<<"\tsecondvalue= "<<secondvalue<<"\tp1="<<*p1<<"\tp2="<<*p2<<endl;

    p1 = p2; // p1 = p2 (value of pointer is copied)
    cout<<"Pointer Copied:"<<"firstvalue= "<<&firstvalue<<"\tsecondvalue= "<<&secondvalue<<"\tp1="<<p1<<"\tp2="<<p2<<endl;

    *p1 = 20; // value pointed to by p1 = 20
    cout<<"Value:"<<"firstvalue= "<<firstvalue<<"\tsecondvalue= "<<secondvalue<<"\tp1="<<*p1<<"\tp2="<<*p2<<endl;
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
    changePointerValue_2();

    // pointerWithArray();
    // pointerIO();

    return -1;
}