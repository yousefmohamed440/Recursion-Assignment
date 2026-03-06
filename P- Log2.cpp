#include <iostream>
using namespace std;

int log2rec(long long n, int counter) {

    if (n == 1) {
        return counter;
    }

    counter++;
    return log2rec(n / 2, counter);
}

int main()
{
    long long n;
    cin >> n;

    cout << log2rec(n, 0);

    return 0;
}