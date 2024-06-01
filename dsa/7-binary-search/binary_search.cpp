#include <iostream>
using namespace std;

int binary_search(int arr[], int p, int l, int h)
{
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (p == arr[m])
        {
            return m;
        }
        if (p > arr[m])
        {
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }
    return -1;
}
int binary_search_recurrsion(int arr[], int p, int l, int h)
{
    if (h < l)
        return -1;
    int m = l + (h - l) / 2;
    if (p == arr[m])
        return m;
    else if (p > arr[m])
        return binary_search_recurrsion(arr,p, m + 1, h);
    else if (p < arr[m])
        return binary_search_recurrsion(arr, p, l, m - 1);
    else
        return -1;
}
void traverse(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
void display(int r)
{
    if (r == -1)
        cout<<"Not found"<<endl;
    else
        cout<<"Element is found at index {"<<r<<"}\n";
}
int main()
{
    int arr[] = {3, 4, 5, 6, 7, 8, 9};
    int s = sizeof(arr) / sizeof(arr[0]);
    traverse(arr, s);
    int result = binary_search(arr, arr[2], 0, s);
    display(result);
    int result2 = binary_search_recurrsion(arr, arr[3], 0, s);
    display(result2);

    return 0;
}