#include<bits/stdc++.h>
using namespace std;

template<typename T>
void print(vector<T> const &v)
{
	for (auto i: v) {
		cout << i << ' ';
	}
	cout << endl;
}

template<typename T>
vector<T> slice(vector<T> &v, int m, int n)
{
	vector<T> vec;
	copy(v.begin() + m, v.begin() + n + 1, back_inserter(vec));
	return vec;
}

int main()
{
	// input vector
	vector<int> v = { 1, 2, 3, 4, 2, 2, 4, 6, 5 };

	// starting and ending index
	int m = 4, n = 7;

	vector<int> sub_vec = slice(v, m, n);
	print(sub_vec);

	return 0;
}
