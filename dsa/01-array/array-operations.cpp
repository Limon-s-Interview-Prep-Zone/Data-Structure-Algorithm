#include <iostream>
using namespace std;
int size = 11;
void array_traverse(int (&arr)[6])
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}
int[] insert_item(int arr[], int n, int k, int item)
{
    int vector = arr;
    int j = n;
    n = n + 1;
    while (j >= k)
    {
        arr[j + 1] = arr[j];
        j = j - 1;
    }
    arr[k] = item;
    printf("The array elements after insertion :\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
    printf("length of an array:%d", l);
    cout << "end";
    return vector;
}
int main()
{
    int face[] = {7, 4, 5, 9, 8, 15};
    int item = 10, k = 3, n = 6;
    int i = 0, j = n;
    printf("The original array elements are :\n");
    for (i = 0; i < n; i++)
    {
        printf("face[%d] = %d \n", i, face[i]);
    }
    insert_item(face, n, k, 100);
    array_traverse(face);

    return 0;
}