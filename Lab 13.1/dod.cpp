#include "dod.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsVar;
double nsDod::A() {
	a *= x * x / n;
	return a;
}