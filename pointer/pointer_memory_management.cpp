#include <iostream>
using namespace std;

int main()
{
    /*
    new int = dynamically allocated memory for int
    delete var= deallocate the memory
    */
    int num;
    int *a = new int;
    cout << "Enter total number of students: ";
    cin >> num;
    float *ptr;

    // memory allocation of num number of floats
    ptr = new float[num];

    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; ++i)
    {
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nDisplaying GPA of students." << endl;
    for (int i = 0; i < num; ++i)
    {
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }

    // ptr memory is released
    delete[] ptr;

    cout <<"Dynamic Memory: "<< a <<endl;
    delete a;
    cout <<"Dynamic Memory: "<< a <<endl;

    return 0;
}