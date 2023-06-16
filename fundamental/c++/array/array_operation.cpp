#include<iostream>
using namespace std;


const int MAX_SIZE = 100;
// Array traversal
void ArrayTraversal(int *arr[], int &n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void DeleteItem(int arr[], int& size, int position){
    if (position < 0 || position >= size) {
        cout << "Invalid position. Cannot update element." << endl;
        return;
    }
    for(int i = position; i< size-1; ++i){
        arr[i] = arr[i+1];
    }
}

void InsertItem(int arr[], int& size, int element, int position){
    if (size >= MAX_SIZE) {
        cout << "Array is full. Cannot insert element." << endl;
        return;
    }
    if (position < 0 || position > size) {
        cout << "Invalid position. Cannot insert element." << endl;
        return;
    }

    for(int i = size-1; i >= position; --i){
        arr[i+1]= arr[i];
    }
    arr[position] = element;
}

void UpdateItem(int *arr[], int& size, int& element, int& position) {
    if (position < 0 || position >= size) {
        cout << "Invalid position. Cannot update element." << endl;
        return;
    }
    // arr[position] = element; // update the element
    position = element;
}
int main(){
    int arr[MAX_SIZE] = { 10, 20, 30, 40, 50 };
    int size = 5;

    ArrayTraversal(arr, size);
    UpdateItem(arr, size, 200, 3);
    ArrayTraversal(arr, size);
    DeleteItem(arr, size, 2);
    ArrayTraversal(arr, size);
    InsertItem(arr, size, 200, 0);
    ArrayTraversal(arr, size);
    return 0;
}