// #include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;
void traverse(vector<int> &arr, int s)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
}
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void divide(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    // int mid = (high + low) / 2; // sometimes (high+low)>MAX_INIT so there will be an error.
    int mid = low + (high - low) / 2;
    divide(arr, low, mid);      // left half
    divide(arr, mid + 1, high); // right half

    merge(arr, low, mid, high);
    // conquer
}
int main()
{
    vector<int> arr = {9, 4, 7};
    int n = 3;
    cout << "Before Sorting: " << endl;
    traverse(arr, n);

    divide(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;

    traverse(arr, n);
    return 0;
}