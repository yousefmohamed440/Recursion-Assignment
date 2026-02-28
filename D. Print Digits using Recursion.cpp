#include <iostream>
#include <vector>
using namespace std;

void printDigits(int n) {
    if (n < 10) {
        cout << n;
        return;
    }

    printDigits(n / 10); //O(lon n)  -> base 10
    cout << " " << n % 10; // O(1)
}

int main() {
    int T;
    cin >> T; // O(1)

    vector<int> numbers(T);

    for (int i = 0; i < T; i++) {  //O(n)
        cin >> numbers[i];   // O(1)
    }

    for (int i = 0; i < T; i++) { //O(n)
        if (numbers[i] == 0)
            cout << 0;
        else
            printDigits(numbers[i]); //O(log n)

        cout << endl;
    }
    // 2n + nlog(n) + log(n) + const => O(nlog n)  
    return 0;
}