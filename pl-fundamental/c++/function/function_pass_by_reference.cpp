#include <iostream>
using namespace std;
int foo(int &y)
{// y is now a reference
    cout<<"Address of Y: "<<&y<<endl;
    return y = (y) * (y);
}
int main()
{
    int x = 12;
    cout << "before " << x << endl;
    cout << foo(x) << endl;
    cout << "After " << x << endl;
    cout<<" address of X: "<< &x <<endl;

    return 0;
}

/*
Since a reference to a variable is treated exactly the same as the variable itself, any changes made to the reference are passed through to the argument. 
*/