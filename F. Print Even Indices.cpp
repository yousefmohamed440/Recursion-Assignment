#include <iostream>
#include <vector>
using namespace std;
void recursion(int start,vector<int>& nums , int end) {
	if (start >= end ) { return; }
	 
	recursion(start + 1, nums, end);// O(n)
	if (start % 2 == 0) {
		cout << nums[start] << " "; 
	}

	// n  => O(n)
}

int main()
{
	int n;
	cin >> n;
	vector <int> numbers(n);
	for (int i = 0; i < n; i++)//O(n)
	{
		cin >> numbers[i]; // O(1)
	}
	recursion(0, numbers, n); // O(n)

	// 2n + constant => O(n)



}

