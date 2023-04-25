#include <iostream>
#include <vector>

using namespace std;

void initVector()
{
    vector<vector<int>> vect{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();

    cout << "Display the Vectors: Using Iterators\n";
    for (auto i : g1)
    {
        cout << i << " ";
    }
    cout << "\nDisplay:\n";

    for(auto i=g1.begin(); i!=g1.end(); ++i){
        cout<<i;
        cout<<*i<<" ";
    }

    cout<<endl;
}
int main()
{
    initVector();
    return 0;
}
/*
Vector: Vecators are dynamic arrays with the ability to resize itself automatically when an item is insearted or deletated.

    1.
*/