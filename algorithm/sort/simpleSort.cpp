#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 1, 2, 4, 0}  ;

    sort(begin(arr), end(arr));
    for (int i : arr)
    {
        cout << arr[i] << endl;
    }
    return 0;
}