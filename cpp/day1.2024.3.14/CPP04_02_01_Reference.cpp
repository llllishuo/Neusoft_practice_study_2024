//============================================================================
// Name        : CPP04_02_Reference.cpp
// Author      : 肖俊峰
// Version     :
// Copyright   : 版权所有，仅供教学学习使用
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// 声明简单的变量
	int i = 5;
	// 声明引用变量
	int &ri = i;

	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << ri << endl;

	printf("%p %p\n",&i,&ri);
	return 0;
}


