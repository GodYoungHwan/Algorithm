#include <iostream>

using namespace std;

int main(){

    int in , in_sum,sum , n;

    cin >> n;

    for(int i =0 ; i<n ; i++)
    {
        cin >> in >> in_sum;
        for( int i=1 ; i<=in; i++)
        {
            sum += i;
        }

        if(sum == in_sum) cout << "YES" << endl;
        else cout << "NO" << endl;
        sum =0;

    }
}