/*
	Question of Stack
*/

#include <iostream>

using namespace std;

int stack[10000];
int ind = -1;

void push(int x)
{
    stack[++ind] = x;
}

int empty() 
{
    if (ind < 0)
    {
        return 1;
    } else 
    {
        return 0;
    }
}

void pop() 
{
    if (empty() == 1)
    {
        cout << "-1" << "\n";
    } else 
    {
        cout << stack[ind] << "\n";
        stack[ind--] = 0;
    }
}
 
int main() 
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) 
    {
        string command;
        cin >> command;
        
        if ("push" == command)
        {
            int x; 
            cin >> x;
            push(x);
        } else if ("top" == command) 
        {
            if (empty() == 1)
            {
                cout << "-1" << "\n";
            } else 
            {
                cout << stack[ind] << "\n";
            }
        } else if ("pop" == command)
        {
            pop();
        } else if ("empty" == command)
        {
            cout << empty() << "\n";
        } else 
        {
            cout << ind + 1 << "\n";
        }
    }
    return 0;
}