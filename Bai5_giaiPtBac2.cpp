// Bai5_giaiPtBac2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "CHUONG TRINH TINH PHUONG TRINH BAC 2\n";
	double a, b, c, delta, x1, x2;
	cout << "Nhap a:"; cin >> a;
	cout << "Nhap b:"; cin >> b;
	cout << "Nhap c:"; cin >> c;
	
	if (a == 0) {
		if (b != 0) {
			cout << "Phuong trinh co nghiem duy nhat x =" << -c / b << endl;
		}
		else {
			if(c != 0) {
				cout << "Phuong trinh vo nghiem\n";
			}
	else {
		cout << "Phuong trinh vo so nghiem";
			}
		}
	}
	else {
		delta = b * b - 4 * a * c;
		if (delta < 0) {
			cout << "Phuong trinh vo nghiem\n";
		}
		else if (delta == 0) {
			cout << " phuong trinh co nghiem kep x1=, x2=" << -b / (2 * a) << endl;
		}
		else {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "Phuong trinh co 2 nghiem\n";
			cout << "x1=" << x1 << endl;
			cout << "x2=" << x2 << endl;
		}
	}
	return 0;
}