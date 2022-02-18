#pragma once
#include <string>


class KMP
{
private:
	std::string _str;
	std::string _p;
	int* next;

public:
	KMP(const std::string& str, const std::string& p);
	~KMP();
	int kmp();

private:
	void getNext();
};