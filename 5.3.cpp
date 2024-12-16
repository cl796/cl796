#include<iostream>
using namespace std;
class changfangzhu {
private:
	double c; double k; double g;
public:
	void Set() {
		cin >> c >> k >> g;
	}
	void Output() {
		cout << "V=" << c * k * g;
	}
};
int main() {
	changfangzhu c[3];
	for (int i = 0; i < 3; i++) {
		c[i].Set();
		c[i].Output();
	}
}