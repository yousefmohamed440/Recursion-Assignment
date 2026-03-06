#include <iostream>
using namespace std;

int sequence(long long n, int counter) {
    if (n == 1)
    {
        return ++counter;
    }
    else if(n %2 !=0)
    {
        counter++;
        return sequence(3 * n + 1, counter);
    }
    else
    {
        counter++;
        return sequence(n / 2, counter);
    }

}

int main()
{
    long long n;
    cin >> n;
    cout << sequence(n, 0);

   

    return 0;
}