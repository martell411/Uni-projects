#include<iostream> 
#include<cmath>
using namespace std;

int main()
{
	int n;
	int r;
	cout << " n: ";
	cin >> n;
	while (n <= 2) {
		cout << "Bad input!" << endl;
		cout << "n:";
		cin >> n;
	}
	for (int i = 0; i < n; i++) {
		if (pow(2, i) > n) {
			r = i;
		}
	}
	cout << "r: " << r<<"\n";
	system("pause");
	return 0;
}
