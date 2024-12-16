//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include "student.h" 
using namespace std;
void Student::display()
{
    cout <<"num:" << num << endl;
    cout << "name" << name << endl;
    cout <<"sex" << sex << endl;
}
void Student::set_value(int a,const char* b, char c) {
    num = a;
    strcpy(name,b);
    sex = c;
}
int main() {
    Student S1;
    S1.set_value(007,"tcg",'m');
    S1.display();
    return 0;
}