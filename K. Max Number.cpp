#include <iostream>
#include<vector>
using namespace std;

int maxrec(int index, vector<int>& nums) {
	if (index == nums.size()-1)
	{
		return nums[index];

	}
	int maxnum = maxrec(index + 1, nums); //O(n)
	
	return max(nums[index], maxnum);
}

int main() {
	int n;
	cin >> n; // O(1)
	vector<int>numbers(n);
	for (int i = 0; i < n; i++) // O(n)
	{
		cin >> numbers[i];
	}
	cout << maxrec(0, numbers); // O(n)

	// 2n + constant => O(n)
	return 0;
}
