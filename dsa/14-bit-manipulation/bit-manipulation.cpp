#include <iostream>

using namespace std;

void bitwiseOperators()
{
    int a = 8;  // 1000
    int b = 13; // 1101
    cout << a << " " << b << endl;
}

int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
    {
        res ^= arr[i];
        cout << res << endl;
    }
    return res;
}
bool isOddEven(int number)
{
    // 3 ==> 0011 & 0001= true
    return number & 1; // will return true if number is odd otherwise even
}

// Driver Method
int main(void)
{
    int arr[] = {12, 12, 14, 90, 14, 14, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << "The odd occurring element is  " << findOdd(arr, n) << endl;
    bitwiseOperators();
    return 0;
}