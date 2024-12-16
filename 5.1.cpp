#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void SeTime(int h,int m,int s) {
		cin >> h >> m >> s;
		hour = h;
		minute = m;
		sec = s;
	}
	void ShowTime() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time tl;
	tl.SeTime(00,00,00);
	tl.ShowTime();
	return 0;
}