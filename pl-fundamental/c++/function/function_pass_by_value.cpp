#include <iostream>
using namespace std;
int foo(int y)
{ // variable y is created when foo is called and value coppied to y. y will destroy when foo() ends;
    return y * y;
}
int main()
{
    int x = 12;
    cout << foo(x) << endl;
    return 0;
}