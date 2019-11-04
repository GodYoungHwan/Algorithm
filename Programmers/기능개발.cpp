#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    int cnt = 0, tmp = 0, k = 0;
    vector<int> sol;
    while (tmp < progresses.size())
    {
        for (int i = 0; i < progresses.size(); i++)
        {
            progresses[i] += speeds[i];
        }

        if (progresses[k] >= 100)
        {
            for (int i = k; i < progresses.size(); i++)
            {
                if (progresses[i] >= 100)
                {
                    cnt++;
                }
                if (progresses[i] < 100)
                {
                    k = i;
                    break;
                }
            }
        }

        if (cnt > 0)
        {
            sol.push_back(cnt);
            tmp += cnt;
            cnt = 0;
        }
    }

    return sol;
}

int main()
{
    vector<int> p;
    vector<int> s;
    p.push_back(95);
    p.push_back(90);
    p.push_back(90);
    p.push_back(90);
    p.push_back(90);

    s.push_back(5);
    s.push_back(10);
    s.push_back(2);
    s.push_back(2);
    s.push_back(2);

    vector<int> sol(solution(p, s));

    for (int i = 0; i < sol.size(); i++)
    {
        cout << sol[i] << " ";
    }
}