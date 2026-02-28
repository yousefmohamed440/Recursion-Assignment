#include <iostream>
#include <string>

using namespace std;
void recursion(int n,int counter ,string s){
	
	if (n == s.length())
	{
		cout << counter;
		return;
	}
	switch (tolower(s[n]))
	{
	case 'a' :
		counter++;
		break;	
	case 'e' :
		counter++;
		break;	
	case 'i':
		counter++;
		break;	
	case 'o':
		counter++;
		break;
	case 'u':
		counter++;
		break;
	
	}
	recursion(n + 1, counter, s); // O(n)
	

}


int main()
{
	string n;
	getline(cin, n); // O(1)
	recursion(0,0,n);// O(n)
	// n + constant => O(n)
}

