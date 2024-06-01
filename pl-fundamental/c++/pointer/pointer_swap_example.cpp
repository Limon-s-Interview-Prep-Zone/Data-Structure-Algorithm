#include <iostream>
using namespace std;

void swap(int &a, int &b)// using the address of a and b
{
    cout << "A:" << a << "\t B:" << b << endl;
    cout << "&A:" << &a << "\t &B:" << &b << endl;

    int temp;
    temp = a;
    a = b;
    b = temp;
    cout <<"After Swaping:\n"<< "A:" << a << "\t B:" << b << endl;
    cout << "&A:" << &a << "\t &B:" << &b << endl;
}

void swap2(int* c, int* d){
    cout << "C:" << c << "\t D:" << d << endl;
    int temp;
    temp = *c;
    *c= *d;
    *d = temp;
    cout <<"After Swaping:\n"<< "C:" << c << "\t D:" << d << endl;
    cout <<"C:" << *c << "\t D:" << *d << endl;
}

int main()
{
    int a = 12, b = 20, c=22, d=30;
    cout << "Before Swap:\t>"
         << "a:" << a << "\t b:" << b << endl;
    swap(a, b); // passing by reference with out pointer

    swap2(&c, &d);
    return 0;
}