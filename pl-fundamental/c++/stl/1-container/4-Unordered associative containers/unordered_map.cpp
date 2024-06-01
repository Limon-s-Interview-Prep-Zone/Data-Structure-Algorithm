/*
unordered_map: unordered_map is an associated container that stores elements formed by the combination of a key value and a mapped value.
Internally unordered_map is implemented using Hash Table, the key provided to map is hashed into indices of a hash table which is why the performance of data structure depends on the hash function a lot but on average, the cost of search, insert, and delete from the hash table is O(1).
*/
// real life exapmple: Given a string of words, the task is to find the frequencies of the individual words:

#include <iostream>
#include <unordered_map>
#include <map>

#include <sstream>
#include<string>

using namespace std;

void printFrequencies(string &str)
{
    map<string, int> wordFreq;
    stringstream ss(str);// create a string stream
    string word;
    while (ss >> word)
    {
        wordFreq[word]++;
    }
    map<string, int>::iterator p;
    for (p = wordFreq.begin(); p != wordFreq.end(); ++p)
        cout << "(" << p->first << ", " << p->second << ")\n";
}
// driver code
int main()
{
    string str;
    cout << "Enter a string:\n";
    getline(cin, str);
    cout << str << endl;
    // string str = "geeks for geeks geeks quiz "
    //              "practice qa for";
    printFrequencies(str);
    return 0;
}