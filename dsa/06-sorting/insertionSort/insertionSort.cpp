#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    // {9, 5, 1, 4, 3}
    for (int i = 1; i <= n; ++i)
    {

        int key = arr[i];
        int j = i-1;
        while(key<arr[j] && j>=0){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
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
    int arr[] = {9, 5, 1, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, n);
    traverse(arr, n);
    return 0;
}
/**
 * Time complexity: O(N^2)
 * Space complexity: O(1)
 */