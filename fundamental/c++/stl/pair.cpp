#include <iostream>
using namespace std;
#define mp make_pair
int main()
{
    pair<char, int> a = mp('A', 1);
    pair<char, int> b = mp('B', 2);

    cout << "Before swapping: " << endl;
    cout << "Contents of a = " << a.first << " " << a.second;
    cout << "Contents of b= " << b.first << " " << b.second;
    a.swap(b);

    cout << "After swapping: " << endl;
    cout << "Contents of a = " << a.first << " " << a.second;
    cout << "Contents of b = " << b.first << " " << b.second;
    return 0;
}

/*
pair:The pair in the C++ STL is a container defined under the <utility> library used to store a pair of two data elements or objects.
The two member elements maybe of the same or different types.
Syntax: pair<data_type1, data_type2> Pair_name;
1. make_pair(): This template function allows to create a value pair without writing the types explicitly.
    Syntax: Pair_name = make_pair (value1,value2);
2. swap: This function swaps the contents of one pair object with the contents of another pair object.
The pairs must be of the same type.
    Syntax: pair1.swap(pair2) ;
*/