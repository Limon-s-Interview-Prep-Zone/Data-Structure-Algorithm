#include<iostream>
#include<array> // static contagious array
#include<tuple>
using namespace std;

array<int,6> ar = {1, 2, 3, 4, 5, 6};

int main(){
    cout<<"STL for arry method: "<< endl;
    cout<<ar.at(3)<<endl;
    cout<<get<3>(ar)<<endl;
    return 0;
}

/*
Array Method:
1. Getting value:
    at(index)
    get<index>(array) // it is not derieved form array class, however, overloaded from touple class.
    [index]
2. arr.front(); // return the address of the first element of the given array.
3. arr.back(); // return the address of the last element of the given array.
4. arr.size(); //return the number of the elements of the given array.
5. arr.max_size(); // return the maximum size of the given array.
6. arr.swap(arr1); // swapping the value of two arrays.
7. arr.empty(); // if empty return true; otherwise return false;
8. arr.fill(value);  // fill the entire array with given value;
*/
