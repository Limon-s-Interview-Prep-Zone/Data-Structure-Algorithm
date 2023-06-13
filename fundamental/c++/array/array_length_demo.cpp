#include <iostream>
#include <array>

using namespace std;

void arrayLengthCalculation()
{
    int arr[10];
    // using the standard library’s begin() and end()
    int length = end(arr) - begin(arr);
    cout << "length: " << length << endl;

    // using total size of memory then divide by each element memory space
    int length2 = sizeof(arr) / sizeof(arr[0]);
    cout << "length-2: " << length2 << endl;

    // using STL size() method
    array<int, 10> arr1;
    cout << "STL arr1.size:()= " << arr1.size() << endl;

    /*using pointer
        &arr= return the first address of the element;
        &arr+1= gives the address of the element immediately after the last element of the array.
        *(&arr+1)-arr= this expression can be used to calculate the distance between the first and last element of the array.

    */
    int len = *(&arr+1) - arr;
    cout << "Using pointer= " << len << endl;
}
int main()
{
    arrayLengthCalculation();
    return 0;
}