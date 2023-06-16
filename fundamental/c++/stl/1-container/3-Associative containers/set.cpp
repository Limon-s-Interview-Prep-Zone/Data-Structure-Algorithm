/*
Set: Sets are a type of associative container in which each element has to be unique because the value of the element identifies it.
The values are stored in a specific sorted order i.e. either ascending or descending.
    Syntax: set<d_type> name;
*/

#include <iostream>
#include <set>
using namespace std;
void set_init()
{
    set<int, greater<int>> s1;
    s1.insert(10);
    s1.insert(5);
    s1.insert(12);
    s1.insert(4);

    for (auto i : s1)
    {
        cout << i << ' ';
    }
}

/*
set<int> s={10,20,30,40,50,60,70,80};
auto lb= s.lower_bound(30);// if value is present then point it otherwise point to immediate next value. here point 30;
auto ub= s.upper_bound(60);//
s.erase(ib, up)// 30 to 60 inclusive;
print(s)// 10,20,70,80 
s.upper_bound(value); // This returns an iterator pointing to the immediate next element which is just greater than k. If the key passed in the parameter exceeds the maximum key in the container, then the iterator returned points to next of last element (which can be identified using set::end() function) in the set container. Complexitity: O(logN)
s.lower_bound(value);// The function returns an iterator pointing to the element in the container which is equivalent to k passed in the parameter. In case k is not present in the set container, the function returns an iterator pointing to the immediate next element which is just greater than k. If the key passed in the parameter exceeds the maximum value in the container, then the iterator returned is equivalent to s.end();  Complexitity: O(logN)
s.erase(value);
s.erase(iterator1, iterator2);
*/ 
void set_demo1()
{
    set<int, greater<int>> s1;

    // insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);

    // only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);

    set<int> s2(s1.begin(), s1.end());
    cout << "s1.lower_bound(40) : "
         << *s1.lower_bound(40) << endl;
    cout << "s1.upper_bound(40) : "
         << *s1.upper_bound(40) << endl;

    // lower bound and upper bound for set s2
    cout << "s2.lower_bound(40) : "
         << *s2.lower_bound(40) << endl;
    cout << "s2.upper_bound(40) : "
         << *s2.upper_bound(40) << endl;

    auto it = s1.upper_bound(20);
    cout<<*it<<endl;
}
int main()
{
    // set_init();
    set_demo1();
    return 0;
}
