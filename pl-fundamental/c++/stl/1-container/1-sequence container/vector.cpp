#include <iostream>
#include <vector>

using namespace std;
// macros
#define pb push_back
#define ppb pop_back

void initVector()
{
       vector<int> initVect1 = {1, 2, 3, 4, 5}; // intializer list
    for (const int &i : initVect1)
    {
        cout << i << " ";
    }

    cout << "\nDisplay Vector-2: ";
    vector<int> initVect2{6, 7, 8, 9, 10}; // uniform initialization
    for (const int i : initVect2)
    {
        cout << i << " ";
    }

    cout << "\nDisplay Vector-3: ";
    vector<int> initVect3(4, 3); // method 3: (size, value)
    for (auto i : initVect3)
    {
        cout << i << " ";
    }
    cout<<"\n2-d vector example:::"<<endl;
    vector<vector<int>> vect2d{
                               {1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}
                            };
    for(auto r: vect2d){
        for(auto c: r){
            cout<<c<<" ";
        }
        cout<<"\n";
    }
}
/// @vector modification:
/*
    1. v1.assign(t_size, value);// it replce the old value;
    2. v1.assign(array, array+size); //array= which will be assign to copy;// array+size: no of items to copy from begaininf of the given array;
    3. v1.assign(begian_iterator, ending_itirator);//begian_iterator: Input iterator to the initial position range; // ending_itirator: Input iterator to the final position range.
    4. v1.push_back(value): it will insert an element at the end. return type void.
    5. v1.pop_back(): it will remove an element at the end by calling the destructor method. return type void.
    6. v1.insert(position, size?, value); //
        v1.insert(position, iterator1, iterator2); // used when we want to copy one vector element to another vector.
    7. v1.clear(); // this will empty the vector.
    8. v1.erase(index);// will erase an element from the vector.
        v1.erase(starting_index, ending_index);
    9. v1.swap(v2); // swapping two vectors;
    10. v1.emplace(position, value);
    11. v1.emplace_back(value)//
*/
void modifierVectorElement()
{
    vector<int> v1;
    v1.assign(5, 12);
    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << "\n v1.assign(begian_iterator, ending_itirator): ";
    v1.assign(v1.begin(), v1.end() - 3);
    for (auto i = v1.begin(); i != v1.end(); i++)
    {
        cout << *i << " ";
    }
    v1.pb(66);
    v1.pb(77);

    cout << "\n push_back(): ";
    v1.assign(v1.begin(), v1.end());
    for (auto i = v1.begin(); i != v1.end(); ++i)
    {
        cout << *i << " ";
    }
    int count=0;
    while (!v1.empty())
    {
        count++;
        v1.ppb();
    }
    cout <<"Count:"<< count<<"\n";
}
/// @Element access
    /* 
    1. reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
    2. v1.at(g) – Returns a reference to the element at position ‘g’ in the vector
    3. v1.front() – can be used to fetch the first element of a vector container.
    4. v1.back() – can be used to fetch the last element of a vector container.
    5. v1.data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
    */
void vectorAccess(){
    vector<int> vec = { 10, 20, 30, 40, 50 };
    int* pos = vec.data();
    cout << "The vector elements are: ";
    for (int i = 0; i < vec.size(); ++i)
        {
            cout<<i<<endl;
        cout << *(pos+i) << " ";
        }
}

/// @Vector Iterator
/*
    1. v1.begin(); v1.end();
    2. v1.cbegin(); v1.cend();
    2. v1.rbegin(); v1.rend();// it wiil return a reverse iterator;
    4. v1.crbegin(); v1.crend();// Returns a constant reverse iterator pointing to the last element in the vector;
*/
void vectorIterator(){
    vector<int> g1;
 
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
 
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
    
}
int main()
{
    // modifierVectorElement();
    // vectorAccess();
    vectorIterator();
    return 0;
}