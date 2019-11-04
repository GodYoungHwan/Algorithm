#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int arr[100][100];
bool flag[100][100];
int x, y, nx, ny, cur_len, len,tx,ty;
vector<int> vec;

struct point
{
    int x, y, len;
};

int main()
{

    cin >> x >> y;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%1d", &arr[i][j]);
        }
    }

    queue<point> q;
    point pt = {0,0,0};
    flag[0][0] =true;
    q.push(pt);

    while (!q.empty())
    {

        cur_len = q.front().len + 1;
        tx = q.front().x;
        ty = q.front().y;

        if(tx == x-1 && ty ==y-1) {cout << cur_len;}
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            nx = tx + dx[i];
            ny = ty + dy[i];

            if (nx >= 0 && ny >= 0 && nx < 100 && ny < 100 && arr[nx][ny] && !flag[nx][ny])
            {
                
                point pt = { nx,
                             ny,
                             cur_len };

                q.push(pt);
                flag[nx][ny] = true;
            }
        }
        
    }

    cout << endl;
    for(int i = 0; i<x; i++)
    {
        for(int j = 0; j<y;j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}