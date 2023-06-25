#include <iostream>
using namespace std;

void swap(int *min, int *b)
{
    int temp = *min;
    *min = *b;
    *b = temp;
}
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n-1; ++i)
    {

        int index = i; // space: O(1)
        for (int j = i + 1; j < n; ++j)
        {

            if (arr[j] <= arr[index])
            {
                index = j;
            }
        }
        swap(&arr[index], &arr[i]);
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
    selection_sort(arr, n);
    traverse(arr, n);
    return 0;
}
/**
 * Time complexity: O(N^2)
 * Space complexity: O(1)
 */