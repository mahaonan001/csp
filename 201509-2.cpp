#include<iostream>
#include<map>
using namespace std;
bool gudge(int n) {
	if (n ==2000 || (n % 4 == 0 && n % 100 != 0)) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int y, d;
	cin >> y >> d;
	int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (gudge(y)) {
		days[1] = 29;
	}
	int month = 0;
	int day = 0;
	while (d - days[month] > 0) {
		d -=days[month];
		month++;
		if (month == 12) {
			break;
		}
	}
	day += d;
	cout << month + 1 << endl << day << endl;
	return 0;
}