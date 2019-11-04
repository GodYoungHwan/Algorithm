// 준규가 가지고 있는 동전은 총 N종류이고, 각각의 동전을 매우 많이 가지고 있다.
// 동전을 적절히 사용해서 그 가치의 합을 K로 만들려고 한다. 이때 필요한 동전 개수의 최솟값을 구하는 프로그램을 작성하시오.

// 입력
// 10 4200
// 1
// 5
// 10
// 50
// 100
// 500
// 1000
// 5000
// 10000
// 50000

//출력
//6

#include <iostream>

using namespace std;
int main()
{
    int n , target , sum , sol;
    sum = 0;
    sol = 0;
    cin >> n >> target;

    int* arr = new int[n];

    for(int i = 0; i<n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

    for(int i = n-1; i>=0; i--)
    {
        if(arr[i] > target) continue;
        
        while(sum + arr[i] <= target)
        {
            sum += arr[i];
            sol++;
        }

        if(target == sum)
            break;
    }

    cout << sol;
}

