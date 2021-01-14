#include<iostream> 
#include<cmath>
using namespace std;

int main()
{
	int m;
	int k;
	cout << " m: ";
	cin >> m;
	while (m <=1) {
		cout << "Bad input!" << endl;
		cout << "m:";
		cin >> m;
	}
	for (int i = 0; i < m; i++) {
		if (pow(4, i) < m) {
			k = i;
		}
	}
	cout << "k: " << k << "\n";
	system("pause");
	return 0;
}
