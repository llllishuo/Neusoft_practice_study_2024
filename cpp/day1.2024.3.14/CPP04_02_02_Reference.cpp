//============================================================================
// Name        : CPP04_02_Reference.cpp
// Author      : 肖俊峰
// Version     :
// Copyright   : 版权所有，仅供教学学习使用
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;
struct Emp{
	int id;
	char name[32];
	char address[256];
	double salary;
};
int add(int x,int y){
	return x+y;
}
void printEmp01(struct Emp emp){
	printf("%d\n%s\n%s\n%.2f\n",emp.id,emp.name,emp.address,emp.salary);
}
void printEmp02(struct Emp* emp){
	printf("%d\n%s\n%s\n%.2f\n",emp->id,emp->name,emp->address,emp->salary);
}
void printEmp03(struct Emp &emp){
	printf("%d\n%s\n%s\n%.2f\n",emp.id,emp.name,emp.address,emp.salary);
}
int main() {
	struct Emp emp;
	emp.id = 100;
	strcpy(emp.name,"Steven King");
	strcpy(emp.address,"ShenYang LiaoNing China");
	emp.salary = 9999.98;
	printEmp03(emp);
	int x=10,y=10;
	add(x,y);
	return 0;
}
