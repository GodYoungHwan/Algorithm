#include <iostream>
#include <vector>

using namespace std;
int testcase;
vector<vector<int> > transposeSquareMatrix(vector<vector<int> > a,int n);
void printSquareMatrix(vector<vector<int> > arr, int n);

int main(void)
{
    cin >> testcase;
    
    while (testcase--)
    {
        vector<vector<int> > arr;
        vector<vector<int> > sol;
        int n, num;
        cin >> n;
        for(int i=0; i<n ;i++)
        {
            for(int j =0; j<n ; j++)
            {
                cin >> num;
                arr[j].push_back(num);
            }   
        }

        sol = transposeSquareMatrix(arr , n);
        printSquareMatrix(sol , n);
    }
}
   
vector<vector<int> > transposeSquareMatrix(vector<vector<int> > a,int n){

    int temp;
    for(int i = 0; i < n; i++){
        for (int j = 0; j <n; j++){
            if(i<j)
            {
                temp = a[j][i];
                a[j][i] = a[i][j];
                a[i][j] = temp;
            }
        }
    }
    return a;
}

void printSquareMatrix(vector<vector<int> > arr , int n)
{
 for(int i = 0; i < n; i++){
        for (int j = 0; j <n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}