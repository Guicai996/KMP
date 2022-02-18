#include "KMP.h"

KMP::KMP(const std::string& str, const std::string& p) : _str(str), _p(p), next(nullptr)
{
	this->getNext();
}

KMP::~KMP()
{
	delete[] next;
}

int KMP::kmp()
{
	int j = 0;

	for (int i = 0; i < _str.size(); ++i) {
		while (j != 0 and _str[i] != _p[j])
			j = next[j - 1];
		if (_str[i] == _p[j])
			++j;
		if (j == _p.size())
			return i + 1 - _p.size();
	}

	return -1;
}

void KMP::getNext()
{
	this->next = new int[_p.size()];
	memset(next, 0, sizeof(int) * _p.size());

	int j = 0;
	next[0] = 0;
	for (int i = 1; i < _p.size(); ++i) {
		while (j !=0 and _p[j] != _p[i])
			j = next[j - 1];
		if (_p[j] == _p[i])
			++j;
		next[i] = j;
	}

}
