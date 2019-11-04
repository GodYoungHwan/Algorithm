#include <iostream>
#include <vector>

using namespace std;

int main(){
    int tmp , a =0 , b = 0;
    int n = 10;
    vector<int> arr_a;
    vector<int> arr_b; 
    
    for(int i = 0; i<10; i++)
    {
        cin >> tmp;
        arr_a.push_back(tmp);
    }
    for(int i = 0; i<10; i++)
    {
        cin >> tmp;
        arr_b.push_back(tmp);
        if(tmp > arr_a[i]) { b += 3;}
        if(arr_a[i]>tmp) { a += 3;}
        if(arr_a[i] == tmp){a++; b++;}
    }

    cout << a << " " << b << endl;
    if(a>b) cout << "A";
    if(a<b) cout << "B";
    if(a==b){
        for(int i = 9; i>=0 ;i--)
        {
            if(arr_a[i] > arr_b[i]){ cout << "A"; break;}
            if(arr_a[i]< arr_b[i]) {cout << "B"; break;}

            if( i == 0) cout << "D";
        }
    }

}