#include <iostream>
#include <queue>

using namespace std;

queue<int> q;
const int MAX = 100001;
int n, k, tmp, cnt;

int arr[MAX] = {
    0,
};

int main()
{
    cin >> n >> k;

    q.push(n);
    arr[n] = 1;

    while (!q.empty())
    {
        tmp = q.front();
        cnt = arr[tmp];
        q.pop();

        if (tmp == k)
        {
            cout << cnt - 1;
            break;
        }
        //plus
        if (tmp < MAX - 1 && arr[tmp + 1] == 0)
        {
            q.push(tmp + 1);
            arr[tmp + 1] = cnt + 1;
        }

        //minus
        if (tmp > 0 && arr[tmp - 1] == 0)
        {
            q.push(tmp - 1);
            arr[tmp - 1] = cnt + 1;
        }

        //jump
        if (tmp * 2 < MAX && arr[tmp * 2] == 0)
        {
            q.push(tmp * 2);
            arr[tmp * 2] = cnt + 1;
        }
    }

    for (int i = 0; i < 20; i++)
    {
        if (i == k)
        {
            cout << "k=";
        }
        cout << arr[i] << " ";
    }
}