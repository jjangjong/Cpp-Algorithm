#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n<=250000)
    {
        int height[n];
        int list[n];
        int sum = 0;
        
        for(int i=0; i<n; i++)
        {
            int data;
            cin >> data;
            
            int front = 0;
            int back = i;
            int size = i;
            
            int spot;
            int leftHeight;
            int rightHeight;
            
            while(front<back)
            {
                int mid = (front+back) / 2;
                
                if(list[mid]<data)
                {
                    front = mid + 1;
                } else
                {
                    back = mid;
                }
            }
            
            spot = back;
            
            if(spot>0)
            {
                leftHeight = height[spot-1];
            } else
            {
                leftHeight = 0;
            }
            
            if(spot<size)
            {
                rightHeight = height[spot];
            } else
            {
                rightHeight = 0;
            }
            
            if(spot < size)
            {
                for(int j=size; j>spot; j--)
                {
                    list[j] = list[j-1];
                    height[j] = height[j-1];
                }
            }
            
            if(leftHeight>rightHeight)
            {
                height[spot] = leftHeight+1;
            } else
            {
                height[spot] = rightHeight+1;
            }
            
            list[spot] = data;
            sum += height[spot];
        }
        
        cout << sum << endl;
        return 0;
    } else
    {
        cout << "Over range" << endl;
    }
}

