//============================================================================
// Name        : CPP02_05_02_Cin.cpp
// Author      : 肖俊峰
// Version     :
// Copyright   : 版权所有，仅供教学学习使用
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char name[50];
	cout << "请输入您的名称:";
	cin >> name;
	int age;
	cout << "请输入您的年龄:";
	cin >> age;
	double salary;
	cout << "请输入您的月薪:";
	cin >> salary;
	cout << endl;
	cout << "您的名称是:" << name << endl;
	cout << "您的年龄是:" << age << endl;
	cout << "您的月薪是:" << salary << endl;
	return 0;
}
