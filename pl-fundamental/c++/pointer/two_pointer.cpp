#include <iostream>
using namespace std;

int main()
{
    // crete an array
    int *numbers = new int[3]; // numbers points to memory where 3 integers can be stored |
    *numbers = 5;              // the first value in the memory numbers points to is now set to 5      |
    numbers[1] = 3;            // using array notation, the value after the first value is now a 3    |
    *(numbers + 2) = 7;        // using pointer notation, the value at index 2 is now a 7
    for(int i=0; i<3; i++){
        cout<<*(numbers+i)<<endl;
    }
    return 0;
}
/*
Why we  need two pointer?
1.https://dev.to/denvercoder1/c-pointers-and-dynamic-memory-allocation-1emi
*/