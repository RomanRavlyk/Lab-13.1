#include "dod.h"
#include "var.h" // ��������� ������ ���������� ������
using namespace nsVar;
double nsDod::A() {
	a *= x * x / n;
	return a;
}