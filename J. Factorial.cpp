#include <iostream>
using namespace std;

 long long recursion(int n) {
	if (n==0) {
		return 1;
	}
	return n * recursion(n - 1); //O(n)

}

int main()
{
	int n;
	cin >> n; // O(1)
	cout << recursion(n); //O(n)

	// n + 1 -> O(n)

}



