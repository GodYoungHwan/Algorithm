#include <iostream>
#include <queue>

using namespace std;

int N, M; // 정점 , 간선 갯수
const int MAX = 1000;
int start = 1, cnt = 0 , temp;
int adj[MAX][MAX] = {
    0,
};

queue<int> q;
bool flag[MAX];


void DFS(int in){

    flag[in] = true;
    for(int i =0 ; i<=N ;i++)
    {
        if(adj[in][i] == 1 && !flag[i])
        {
            
            DFS(i);
            cnt++;

        }
    }

}

int main()
{
    cin >> N >> M;

    int s, e;

    for (int i = 0; i < M; i++)
    {
        cin >> s >> e;

        adj[s][e] = 1;
        adj[e][s] = 1;
    }
    
    DFS(start);

    q.push(start);
    flag[start] = true;

    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        for (int i = 0; i <= N; i++)
        {
            if (adj[temp][i] == 1 && !flag[i])
            {
                q.push(i);
                flag[i] = true;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}