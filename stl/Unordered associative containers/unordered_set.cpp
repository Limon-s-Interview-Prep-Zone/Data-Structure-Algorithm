/*
unordered_set: An unordered_set is an unordered associative container implemented using a hash table where keys are hashed into indices of a hash table so that the insertion is always randomized. All operations on the unordered_set take constant time O(1) on an average which can go up to linear time O(n) in the worst case which depends on the internally used hash function, but practically they perform very well and generally provide a constant time lookup operation.
*/

#include <iostream>
#include<unordered_set>
#include<set>

using namespace std;
 
// Print duplicates in arr[0..n-1] using unordered_set
void printDuplicates(int arr[], int n)
{
    // declaring unordered sets for checking and storing
    // duplicates
    unordered_set<int> intSet;
    unordered_set<int> duplicate;
 
    // looping through array elements
    for (int i = 0; i < n; i++) {
        // if element is not there then insert that
        if (intSet.find(arr[i]) == intSet.end())
            intSet.insert(arr[i]);
 
        // if element is already there then insert into
        // duplicate set
        else
            duplicate.insert(arr[i]);
    }
 
    // printing the result
    cout << "Duplicate item are : ";
    unordered_set<int>::iterator itr;
 
    // iterator itr loops from begin() till end()
    for (itr = duplicate.begin(); itr != duplicate.end();
         itr++)
        cout << *itr << " ";
}
 
// Driver code
int main()
{
    int arr[] = { 1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5 };
    int n = sizeof(arr) / sizeof(int);
 
    printDuplicates(arr, n);
    return 0;
}