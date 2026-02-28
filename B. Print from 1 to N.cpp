#include <iostream>
using namespace std;

void recursion(int n) {

    if (n == 0) {
        return;
    }
   
    recursion(n - 1); // O(n)
    cout << n << endl;

}

int main()
{
    int n;
    cin >> n; // O(1)
    recursion(n); // O(n)

    // n + 1 =>    O(n) 
}

