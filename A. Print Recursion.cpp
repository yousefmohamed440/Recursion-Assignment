#include <iostream>
using namespace std;
void recursion(int n) {
    if (n == 0) {
        return;
    }
    cout << "I love Recursion" << endl;
    recursion(n - 1); // O(n)

}

int main()
{
    int n;
    cin >> n; // O(1)
    recursion(n);//O(n)
    // n + 1 => O(n)          Time Complexity = O(n)
}
