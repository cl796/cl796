#include<iostream>
using namespace std;
class student {
public:
	student(int n, float s):num(n), score(s) {}
	int num;
	float score;
};
void max(student * arr) {
        float max_score = arr[0].score;
        int k = 0;
        for (int i = 1; i < 5; i++) {
            if (arr[i].score > max_score) {
                max_score = arr[i].score;
                k = i;
            }
        }
        std::cout << "成绩最高的学生学号为: " << arr[k].num << std::endl;
    }
int main() {
    student stud[5] = { student(101, 78.5), student(102, 85.5), student(103, 98.5), student(104, 100.0), student(105, 95.5) };
    student* p = &stud[0];
    max(p);
    return 0;
}
