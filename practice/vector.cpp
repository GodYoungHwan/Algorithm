#include <iostream>
#include <vector>
using namespace std;

void print_vec(vector<int> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl << endl;
}

// int main()
// {
//     vector<int> v;
//     // vector<int> v(10); 기본값으로 size 10인 벡터 초기화
//     // vector<int> v(10,0); size 10인벡터에 초기값 0을 대입

//     v.push_back(5);
//     v.push_back(3);
//     v.push_back(25);
//     // v[0] =1;
//     // v[1] =2;
//     // v[2] =3; 이런식으로 할당하려면 push_back을 하고나서 해야함
//     for(int i = 0; i<v.size(); i++)
//     {
//         cout << v[i] << endl;
//     }

    
//     // cout << v.at(2) << endl;
//     // cout << *(v.begin() + 0) << endl;
//     cout <<"삭제후" << endl;
//     // v.erase(v.begin() + 2); // Index를 이용한 삭제
//     // v.erase(remove(v.begin(), v.end(), 3)); // 값을 이용한 삭제
//     for(int i = 0; i<v.size(); i++)
//     {
//         cout << v[i] << endl;
//     }


//     return 0;
// }
//최대 최소 찾기


int main()
{
	vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(6);
    vec.push_back(10);
	int min = *min_element(vec.begin(), vec.end());
	int max = *max_element(vec.begin(), vec.end());
	cout << "min : " << min << endl;
	cout << "max : " << max << endl;

    //최대,최소값으로 지우기
    print_vec(vec);
	vec.erase(max_element(vec.begin(), vec.end()));
	print_vec(vec);
	vec.erase(min_element(vec.begin(), vec.end()));
	print_vec(vec);
}