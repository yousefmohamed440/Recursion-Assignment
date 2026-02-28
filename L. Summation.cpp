#include <iostream>
#include <vector>
using namespace std;

long long  recursion(int n, vector<long long>& nums) {
	if (n == nums.size() ) {
		return 0;
	}

	return nums[n] + recursion(n + 1, nums);// O(n)
	
	
}

int main()
{
	int n;
	cin >> n;//O(1)
	vector <long long> numbers(n);
	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];//O(1)

	}
	cout << recursion(0, numbers);//O(n)


	// O(n)
}


