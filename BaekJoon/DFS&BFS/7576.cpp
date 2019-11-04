#include <iostream>
#include <queue>

using namespace std;

int x, y, tx, ty, nx, ny,cur_day;
int arr[1000][1000];
bool flag[1000][1000];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

struct tomato
{
    int x, y, day;
};

queue<tomato> q;

int main()
{
    cin >> y >> x;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arr[i][j];
        }
    }

    //find tomato
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (arr[i][j] == 1)
            {
                flag[i][j] = true;
                tomato tmt={i, j, 0};
                q.push(tmt);
            }
            if(arr[i][j] == -1)
            {
                flag[i][j] = true;
            }
        }
    }
    //spread tomato
    while (!q.empty())
    {
        tx = q.front().x;
        ty = q.front().y;
        cur_day = q.front().day+1;
        q.pop();
        
        for (int i = 0; i < 4; i++)
        {
            nx = tx + dx[i];
            ny = ty + dy[i];

            if (!arr[nx][ny] && !flag[nx][ny] && nx >= 0 && ny >= 0 && nx < x && ny < y)
            {
                tomato tmt={nx,ny,cur_day};
                flag[nx][ny] = true;
                q.push(tmt);
            }
        }
    }
    
    // find zero
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (flag[i][j] == 0)
            {
                cout << -1 << endl;
                return 0;
            }
        }
        
    }

    cout << cur_day-1;
}