//============================================================================
// Name        : CPP02_05_FormattedOutput.cpp
// Author      : 肖俊峰
// Version     :
// Copyright   : 版权所有，仅供教学学习使用
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << setw(12) << "Steven King" << setw(11) << "2003-06-17" << setw(9)
			<< 24000.183 << endl;
	cout << setw(12) << "Bruce Ernst" << setw(11) << "2007-05-21" << setw(9)
			<< 4800.211 << endl;
	cout << setw(12) << "John Chen" << setw(11) << "2005-09-28" << setw(9)
			<< 8200.398 << endl;
	cout << string(32, '*') << endl;
	cout << left;
	cout << setw(12) << "Steven King" << setw(11) << "2003-06-17" << setw(9)
			<< 24000.183 << endl;
	cout << setw(12) << "Bruce Ernst" << setw(11) << "2007-05-21" << setw(9)
			<< 4800.249 << endl;
	cout << setw(12) << "John Chen" << setw(11) << "2005-09-28" << setw(9)
			<< 8200.321 << endl;
	cout << endl;
	cout << string(33, '-') << endl;
	cout << setprecision(2) << fixed;
	cout << left << "|" << setw(11) << "Steven King" << "|" << setw(10)
			<< "2003-06-17" << "|" << setw(8) << right << 24000.183 << "|"
			<< endl;
	cout << string(33, '-') << endl;
	cout << left << "|" << setw(11) << "Bruce Ernst" << "|" << setw(10)
			<< "2007-05-21" << "|" << setw(8) << right << 4800.249 << "|"
			<< endl;
	cout << string(33, '-') << endl;
	cout << left << "|" << setw(11) << "John Chen" << "|" << setw(10)
			<< "2005-09-28" << "|" << setw(8) << right << 8200.321 << "|"
			<< endl;
	cout << string(33, '-') << endl;

	cout.setf(ios_base::hex, ios_base::basefield);
	// cout.setf(ios_base::hex);
	// cout.unsetf(ios_base::oct);
	// cout.unsetf(ios_base::dec);
	cout.setf(ios_base::showbase);
	cout << 100 << endl;

	ios_base::fmtflags fmtflags;
	fmtflags = cout.flags();
	fmtflags &= ~cout.basefield;
	fmtflags |= cout.hex;
	fmtflags |= cout.showbase;
	cout.flags(fmtflags);
	cout << 100 << endl;
	cout << hex << showbase << 100 << endl;
	return 0;
}

