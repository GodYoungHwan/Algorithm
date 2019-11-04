#include <iostream>

using namespace std;

int t, N, M, k, cnt, tx, ty ,nx,ny;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int arr[50][50];
bool flag[50][50];

void DFS(int x, int y)
{
    flag[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
         nx = x + dx[i];
         ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && ny < M && nx < N)
        {
            if(!flag[nx][ny] && arr[nx][ny])
            DFS(nx,ny); //DFS 들어가기전에 다른작업들을 끝내야함 ex)flag
        }
    }
}

int main()
{

    cin >> t;

    while (t--)
    {
        cnt = 0;
        cin >> N >> M >> k;

        for (int i = 0; i < k; i++)
        {
            cin >> tx >> ty;
            arr[tx][ty] =1;
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (arr[i][j] && !flag[i][j])
                {
                    DFS(i, j);
                    cnt++;
                }
                
            }
            
        }
        cout << cnt << endl;
        
        for(int i=0; i<50; i++)
        {
            for(int j =0; j<50; j++)
            {
                arr[i][j] = 0;
                flag[i][j] = false;
            }
        }
    }
}