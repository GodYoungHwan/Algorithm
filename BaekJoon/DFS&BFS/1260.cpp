#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int MAX = 1001;
int N, M, V; //정점의갯수 , 간선의갯수 , 시작
int adj[MAX][MAX] = {
    0,
};
bool flag[MAX];
queue<int> q;

void DFS(int in)
{
    cout << in << " ";
    
    flag[in] = true;

    for (int i = 0; i <= N; i++) // 모든 배열을 전부 찾아야함(i<=N)
    {
        if (adj[in][i] == 1 && !flag[i])
        {
            
            DFS(i);
        }
    }
}

void BFS(int in)
{
    q.push(in);

    flag[in] = true;

    while(!q.empty())
    {
        int temp = q.front();
        q.pop();

        cout << temp << " ";

        for(int i =0 ;i<=N; i++)
        {
            if(adj[temp][i] == 1 && !flag[i])
            {
                q.push(i);
                flag[i] = true;
            }
        }        
    }

}

int main()
{
    cin >> N >> M >> V;
    int s, e;
    
    for (int i = 0; i < M; i++)
    {
        cin >> s >> e;
        adj[s][e] = 1;
        adj[e][s] = 1;
    }

    DFS(V);
    cout << endl;

    memset(flag, false, sizeof(flag)); 
    //어떤 메모리의 시작점부터 연속된 범위를 어떤 값으로(바이트 단위) 모두 지정하고 싶을 때 사용하는 함수이다.

    
    BFS(V);
    cout << endl;
}