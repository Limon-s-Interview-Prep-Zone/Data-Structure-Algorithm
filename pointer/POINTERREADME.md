1. ### Pointer:
    A pointer is a variable that stores the memory address of its value.
    ## 1.1: Declar A pointer and Initialize:
        ```c++
            int a = 12;
            int *pointer = &a;
            float *floatPointer;
            char *charPointer;
        ```
    ## 1.2: & operator:
        - `&` used to address of a vabiable; `int* x= &b;`
        - `&` used as a reference.
        - `&` used in function parameters to pass variables by reference instead of by value.
    ## 1.3: Deferenec: to get a value of a pointer that points to another location is called dereference.
        - `*` used to access the value that a pointer points to.

    ## 1.4: Changing pointer Value:
        ```
            int a = 12;
            int *b = &a;
            *b=20;
            cout<<b<<endl; // a=20;
        ```
        **What is the difference between *b=20 **