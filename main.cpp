#include <iostream>
#include "KMP.h"

using namespace std;

int main(int argc, char** argv) 
{
	KMP kmp("", "");
	auto result = kmp.kmp();
	cout << "hello world" << endl;
	return 0;
}