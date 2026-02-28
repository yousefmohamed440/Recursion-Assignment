#include <iostream>
using namespace std;

void recursion(int n) {
    if (n == 0) {
        return;
    }
    else if (n == 1) {
        cout << n;
    }
    else
    {
        cout << n << " ";
    }
    recursion(n - 1);

}
int main()
{
    int n;
    cin >> n; //O(1)
    recursion(n); // O(n)

    // n + 1 =>   O(n)
}


