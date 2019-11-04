#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Pos
{
    int start, end;
};
bool compare(Pos a, Pos b)
{
    if (a.end != b.end)
    {
        return a.end < b.end;
    }
    else
        return a.start < b.start;
}

int main()
{
    int n, in_str, in_end, cnt = 0 , tmp = 0;

    cin >> n;

    vector<Pos> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> in_str >> in_end;

        arr[i].start = in_str;
        arr[i].end = in_end;
    };

    sort(arr.begin(), arr.end(), compare);

    for (int i = 0; i < arr.size(); i++)
    {
        if(tmp<=arr[i].start)
        {
            tmp = arr[i].end;
            cnt++;
        }
    }

    cout << cnt << endl;
}
