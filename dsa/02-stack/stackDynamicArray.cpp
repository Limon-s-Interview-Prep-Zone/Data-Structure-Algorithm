#include<iostream>
#include <vector>

using namespace std;


class Stack
{
public:
    vector<int> stack_;

    Stack(){};

    void push(int n)
    {
        stack_.push_back(n);
    }

    int pop()
    {
        int res = stack_[stack_.size() - 1];
        stack_.pop_back();
        return res;
    }
};

int main()
{
    Stack s = Stack();
    s.push(100);
    s.push(200);
    cout << "Pop\t" << s.pop() << endl;
    cout << "Pop\t" << s.pop() << endl;
    return 0;
}
