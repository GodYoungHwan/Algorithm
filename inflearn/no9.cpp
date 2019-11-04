#include <iostream>

using namespace std;

int main(){
    int arr[50001];
    int n;

    cin >> n;
    
    for(int i=1; i<=n;i++)
    {
        for(int j = i; j<=n; j=j+i)
        { 
            arr[j]++;
        }
    }

    for(int i=1;i<=n;i++)
    {
        cout << arr[i] << " ";
    }
}