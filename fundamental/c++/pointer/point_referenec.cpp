#include <iostream>
using namespace std;

void push(int *ref, int data)
{
}

int main()
{
    int a = 12;
    int *b = NULL; // &b = 404 b=0
    int **c = &b; // &c = 408 c = 404 
    cout<<&b<<endl; // &b = 404
    cout<<*c<<endl; // *c = 404's value or b = 0  
    cout<<&(*c)<<endl; // &(*c) = &b

    return 0;
}