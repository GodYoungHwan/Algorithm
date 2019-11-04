#include <iostream>

using namespace std;

int main(){
    int n , tmp = -12345 ,max = -12345 , cnt = 0 , in; 
    bool isup;
    
    cin >> n;
    for(int i =0; i<n; i++)
    {
        cin >> in;
        if(in >= tmp) {tmp = in;
        isup = true;
        }

        else if(in < tmp){isup = false; cnt = 1; tmp = in;}

        if(isup){cnt++;}

        if(cnt > max) max = cnt;


    }

    cout << max;
}