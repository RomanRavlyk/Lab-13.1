#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsDod;
using namespace nsVar;
double nsSum::S() {
	n = 0;
	a = 1;
	s = a;
	do {
		n++;
		a = A();
		s += a;
	} while (abs(a) >= eps);
	return s;
}