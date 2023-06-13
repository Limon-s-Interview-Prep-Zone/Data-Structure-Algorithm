/*Map: Each element has a key value and a mapped value. No two mapped values can have the same key values. It sort baseon the the key by accending order
    pair_insert<key_value, map_value>//     m.insert(pair<int, int>(1, 40));
*/
#include <iostream>
#include <map>

using namespace std;
void init_map()
{
    map<int, int> m1;
    m1.insert({1, 1});
    m1.insert(pair<int, int>(2, 2));
    m1[3] = 3;

    cout << "\nThe map m1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = m1.begin(); itr != m1.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;

    map<int, int> m2(m1.begin(), m1.end());
    cout << "\nThe map m1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (auto itr = m1.begin(); itr != m1.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
}
int main()
{
    init_map();
    return 0;
}