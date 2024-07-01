#include <iostream>

using namespace std;

bool Kiemtrasonguyento(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
		}
	}

	if (count == 2) {
		return true;
	}
	else {
		return false;
	}
}
	int main() {
		int n;
		cout << "Nhap so:";
		cin >> n;
		for (int i = 0; i < n; i++) {
			if (Kiemtrasonguyento(i))  {
				cout << " " << i << " so nguyen to " << endl;
				}
			else {
				cout << "  " << i << " khong phai nguyen to " << endl;
			}
		}
		return 0;
	}