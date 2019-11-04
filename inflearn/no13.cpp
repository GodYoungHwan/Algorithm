#include <iostream>

using namespace std;
int main()
{
    string in;
    cin >> in;
    int arr[11] = {0,};
    int temp , max = 0;
    for (int i = 0; in[i] != '\0'; i++)
    {
        temp = in[i] - 48;
        arr[temp]++;
    }

    for(int i=0; i < 10;i++)
    {
        if(arr[i] >= arr[max]) max = i;
    }

    cout << max;
}