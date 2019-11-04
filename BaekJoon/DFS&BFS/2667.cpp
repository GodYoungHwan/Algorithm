#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 26;
int n, tmp, cnt;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {-1, 1, 0, 0};
int num[1010];

vector<int> vec;
int arr[MAX][MAX];
bool flag[MAX][MAX];

void dfs(int x, int y)
{
    flag[x][y] = true;
    num[cnt]++;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (arr[nx][ny] && ny < n && ny < n && !flag[nx][ny] && ny >= 0 && nx >= 0)
        {
            dfs(nx, ny);   
        }
    }
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%1d", &arr[i][j]); //여기서 애먹었다 , %1d로 숫자 하나씩 받아서 집어넣어야함
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] && !flag[i][j])
            {
                dfs(i, j);
                cnt++;
            }
        }
    }

    printf("%d\n", cnt);
    sort(num, num + cnt);
    for (int i = 0; i < cnt; i++) printf("%d\n", num[i]);

}