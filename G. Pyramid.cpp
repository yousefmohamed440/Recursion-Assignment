#include <iostream>
using namespace std;

void spaces(int n) {
    if (n == 0) { return; }
    cout << " ";
    spaces(n - 1); 
    //O(n)
}
void stars(int n) {
    if (n == 0) { return; }
    cout << "*";
    stars(n - 1);
    // O(n)
}
void pyramid(int currentlevel, int n) {
    if (currentlevel > n) { return; }
   // pyramid(currentlevel + 1, n); => H. Inverted Pyramid

    spaces(n - currentlevel);//O(n)
    stars(2 * currentlevel - 1);//O(n)
    cout << endl;
    pyramid(currentlevel + 1, n); 
    
    // n * n -> O(n^2)

}


int main() {
    int N;
    cin >> N;// O(1)
    pyramid(1, N);  // O(n^2)
   

    return 0;
}