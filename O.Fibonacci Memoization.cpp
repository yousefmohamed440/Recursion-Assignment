#include <iostream>
#include <vector>
using namespace std;

vector <long long> numbers(1000, -1);

long long f(int n) {
	if (n == 1) {
		return 0;
	}
	else if (n == 2)
	{
		return 2;
	}
	else if (numbers[n] != -1)
	{
		return numbers[n];
	}

	return numbers[n] = f(n - 1) + f(n - 2);




}




int main()
{
	int n;
	cin >> n;
	cout << f(n);

	return 0;

}


