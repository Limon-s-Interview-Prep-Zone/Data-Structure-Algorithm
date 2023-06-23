#include <iostream>
using namespace std;
int foo(int *y)
{
    return *y = (*y) * (*y);
}
int main()
{
    int x = 12;
    cout << "before " << x << endl;
    cout << foo(&x) << endl;
    cout << "After " << x << endl;

    return 0;
}

/*
Passing by address means passing the address of the argument variable. The function parameter must be a pointer. The function can then dereference the pointer to access or change the value being
pointed to.

1. It allows us to have the function change the value of the argument.
2. Because a copy of the argument is not made, it is fast, even when used with large structures or
classes.
3. Multiple values can be returned from a function.
*/