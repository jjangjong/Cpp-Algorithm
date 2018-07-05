/*
	Question of Queue
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
        cout << stack[0] << "\n";
        
        for(int i=0; i<ind; i++)
        {
            stack[i] = stack[i+1];
        }
        
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
        } else if ("pop" == command)
        {
            pop();
        } else if ("empty" == command)
        {
            cout << empty() << "\n";
        } else if ("back" == command)
        {
            if (empty() == 1)
            {
                cout << "-1" << "\n";
            } else
            {
                cout << stack[ind] << endl;
            }
        } else if ("front" == command)
        {
            if (empty() == 1)
            {
                cout << "-1" << "\n";
            } else
            {
                cout << stack[0] << endl;
            }
        } else if ("size" == command)
        {
            cout << ind+1 << endl;
        }
    }
    return 0;
}