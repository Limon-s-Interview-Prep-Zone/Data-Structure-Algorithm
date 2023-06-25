#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        bool swapped = false;
        for (int j = 0; j < n - 1; ++j)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
void traverse(int arr[], int n)
{
    for (int i = 0; i <= n; ++i)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {-2, 45, 0, 11, -9};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    traverse(arr, n);
    return 0;
}
/**
 * Time complexity: O(N^2)
 * Space complexity: O(1)
 */