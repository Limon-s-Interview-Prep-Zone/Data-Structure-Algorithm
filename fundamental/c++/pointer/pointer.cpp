#include <iostream>
using namespace std;

void pointerInit()
{
    int number = 88;            // An int variable with a value
    int *pNumber1 = &number;    // point the address of number and save it to his own memory address.
    int **pNumber2 = &pNumber1; // point the address of number1
    int ***pNumber3 = &pNumber2;
    cout << " number " << &number << endl;
    cout << " number1 " << pNumber1 << endl;
    pNumber1 == &number ? cout << " pNumber1 == &number = true " << endl : cout << "pNumber1 == &number = false" << endl;
    cout << " number2 " << pNumber2 << endl;
    cout << " number3 " << pNumber3 << endl;

    cout << " number1 = " << *pNumber1 << endl;
    cout << " number2 = " << **pNumber2 << endl;
    cout << " number3 = " << ***pNumber3 << endl;
}

void changePointerValue()
{
    int a = 12, b = 14;
    int *c = &a;
    int *d = &b;

    *c = 100;  // change the value of address a
    cout<<" a = "<<a<<"\t";
    cout<<" b = "<<b<<"\t";
    cout<<" c = "<<*c<<"\t";
    cout<<" d = "<<*d<<"\t";
    // print -> a = *c = 100 b = *d =14
}

void changePointerValue_2()
{
    int firstvalue = 5, secondvalue = 15;

    int *p1 = &firstvalue;  // p1 = address of firstvalue
    int *p2 = &secondvalue; // p2 = address of secondvalue
    cout << "Adress:"
         << "&firstvalue= " << &firstvalue << "\t&secondvalue= " << &secondvalue << "\tp1=" << p1 << "\tp2=" << p2 << endl;
    cout << "Value:"
         << "firstvalue= " << firstvalue << "\tsecondvalue= " << secondvalue << "\tp1=" << *p1 << "\tp2=" << *p2 << endl;

    *p1 = 10;  // value pointed to by p1 = 10
    *p2 = *p1; // value pointed to by p2 = value pointed to by p1
    cout << "After:"
         << "firstvalue= " << &firstvalue << "\tsecondvalue= " << &secondvalue << "\tp1=" << p1 << "\tp2=" << p2 << endl;
    cout << "Value:"
         << "firstvalue= " << firstvalue << "\tsecondvalue= " << secondvalue << "\tp1=" << *p1 << "\tp2=" << *p2 << endl;

    p1 = p2; // p1 = p2 (value of pointer is copied)
    cout << "Pointer Copied:"
         << "firstvalue= " << &firstvalue << "\tsecondvalue= " << &secondvalue << "\tp1=" << p1 << "\tp2=" << p2 << endl;

    *p1 = 20; // value pointed to by p1 = 20
    cout << "Value:"
         << "firstvalue= " << firstvalue << "\tsecondvalue= " << secondvalue << "\tp1=" << *p1 << "\tp2=" << *p2 << endl;
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

    // pointerIO();

    return -1;
}