#include <iostream>
#include <vector>
using namespace std;

void summatrix(int i, int j, int r, int c, vector<vector<int>>a,
	vector<vector<int>>b)
 {
	if (i == r)
	{
		return;
	}
	if (j == c) {
		cout << endl;
		summatrix(i + 1, 0, r, c, a, b);
		return;
	}
	cout << a[i][j] + b[i][j] << " ";
	summatrix(i, j + 1, r, c, a, b);
	



}


int main()
{
	int r,c;
	cin >> r >>c;
	vector<vector<int>> A(r, vector<int>(c));
	vector<vector<int>> B(r, vector<int>(c));
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> A[i][j];
		}
	}	
	
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> B[i][j];
		}
	}

	summatrix(0, 0, r, c, A, B);
	

}


