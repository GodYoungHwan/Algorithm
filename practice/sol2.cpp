#include <iostream>
#include <vector>

using namespace std;
vector<int> partitionArray(vector<int> arr);
void printArray(vector<int> sol);

int main()
{
    int testcase;
    int n, num;

    cin >> testcase;

    while (testcase--)
    {

        vector<int> arr;

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            arr.push_back(num);
        }
        printArray(partitionArray(arr));

        int n = 0;
        int num = 0;
        arr.clear();
    }
}
vector<int> partitionArray(vector<int> arr)
{
    vector<int> sol;
    sol.clear();
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 1)
        {
            sol.push_back(arr[i]);
            arr[i] = -1;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= 0)
        {
            sol.push_back(arr[i]);
        }
    }

    return sol;
}

void printArray(vector<int> sol)
{
        for (int i = 0; i < sol.size(); i++)
        {
            cout << sol[i] << " ";
        }
        cout<< endl;
}
//3
//10
//1 2 3 4 5 6 7 8 9 0
//10
//0 9 8 7 6 5 4 3 2 1
//1
//9
