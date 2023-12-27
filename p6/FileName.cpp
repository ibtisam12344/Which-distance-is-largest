#include<iostream>
using namespace std;
void dis(int& m, int& km) {
	km = 1000 * km;
	if (km > m) {
		cout << "The largest distance is = " << km / 1000 << endl;
	}
	else if (km < m) {
		cout << "The largest distance is = " << m << endl;
	}

}
int main() {
	int km, m;
	cout << "Enter the distance in kilometer : ";
	cin >> km;
	cout << "Enter the distance in meter : ";
	cin >> m;
	dis(m, km);
	return 0;
}