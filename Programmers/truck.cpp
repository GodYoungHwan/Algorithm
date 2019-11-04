#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

vector<int> arr;
queue<int> bridge;

int main()
{
    stack<int> wait;
    int bridge_len, weight, cur_weight = 0, temp, time,temp_weight;
    cin >> bridge_len >> weight;

    for (int i = 0; i < bridge_len; i++)
    {
        bridge.push(0);
    }

    while (!bridge.empty())
    {
        if (!wait.empty())
        {
            temp = wait.top();
            temp_weight = cur_weight+temp - bridge.front();
        
            if (temp_weight <= weight)
            {    
                bridge.push(temp);
                cur_weight += temp;
                wait.pop();
            }

            if (temp_weight > weight)
            {
                bridge.push(0);
            }

            if (bridge.size() > bridge_len)
            {
                cur_weight = cur_weight - bridge.front();
                bridge.pop();
            }
            
        }

        if(wait.empty())
        {
            bridge.pop();
        }


        time++;
    }
    cout << time + 1;
}

