#include <iostream>
#include <vector>
using namespace std;

void recursion(int n) {
    if (n == 0)
        return;

    recursion(n / 2); //O(log n) -> base 2 
    cout << n % 2; // O(1)

    // log n + constant  => O(log n)
}

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);

    for (int i = 0; i < n; i++) // O(n)
        cin >> numbers[i]; // O(1)

    for (int i = 0; i < n; i++) {// O(n)
        if (numbers[i] == 0)
            cout << 0; 
        else
            recursion(numbers[i]); // O(log n)

        cout << endl;
    }
    // 2n + log(n) + nlog(n) + constant  => O(nlog n)
    return 0;
}