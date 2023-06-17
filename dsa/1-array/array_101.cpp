#include <iostream>
using namespace std;
int size= 11;
void array_traverse(int (&arr)[6])
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}
int[] insert_item(int arr[], int n, int k, int item)
{
    int vector=arr;
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
    cout<<"end";
    return vector;
}
int main()
{
    // int face[size] = {1, 5, 7, 9, 2, 4, 6, 8, 10, 15};
    // array_traverse(face);
    // cout << "\nAfter insertion:\n";
    // int item = 10, k = 3;
    // int i = 0, j = size+1;

    // while (j >= k)
    // {
    //     face[j + 1] = face[j];
    //     j = j - 1;
    // }
    // face[k] = item;
    // array_traverse(face);

    // int face[] = {7, 4, 5, 9, 8, 15};
    // int item = 10, k = 1, n = 6;
    // int i = 0;
    // int j=n;
    // printf("The original array elements are :\n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("face[%d] = %d \n", i, face[i]);
    // }
    // n = n + 1;
    // // for(int j= n-1;j>=k; j--){
    // //      face[j + 1] = face[j];
    // //     // j = j - 1;
    // // }

    // while (j >= k)
    // {
    //     face[j + 1] = face[j];
    //     j = j - 1;
    // }
    // face[k] = item;
    // printf("The array elements after insertion :\n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("face[%d] = %d \n", i, face[i]);
    // }

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
        // n = n + 1;
        // while (j >= k)
        // {
        //     face[j + 1] = face[j];
        //     j = j - 1;
        // }
        // face[k] = item;
        // printf("The array elements after insertion :\n");
        // for (i = 0; i < n; i++)
        // {
        //     printf("face[%d] = %d \n", i, face[i]);
        // }

        return 0;
}