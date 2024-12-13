#include "mytemperature.h"
double celsius_to_fah(double cel) {
	double fah = ((9.0 / 5.0) * cel + 32);
	return fah;
}
double fahrenheit_to_cels(double fah) {
	double cel = (5.0 / 9.0) * (fah - 32);
	return cel;
}