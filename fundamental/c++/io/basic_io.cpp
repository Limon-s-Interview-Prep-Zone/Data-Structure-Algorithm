#include <iostream>

using namespace std; // std:: is implied.

// https://sites.ualberta.ca/~hbrausen/basics/inputoutput.html

int main(int arg, char **argv)
{
    cout<<"Print number"<<endl;
    int N, temp;
    cin >> N;
    int s = 0;
    for (int i = 0; i < N; ++i) {
    	cin >> temp;
    	s += temp;
    }
    cout << s << endl;
    return 0;
}