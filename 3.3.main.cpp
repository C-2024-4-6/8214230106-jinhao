#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;

int main() {
    cout << fixed << setprecision(2);
    cout << "Celsius\t\tFahrenheit\t|\tFahrenheit\t\tCelsius" << endl;
    for (double cel = 40.0, fah = 120.0; cel >= 31.0; cel -= 1.0, fah -= 10.0) {
        double fah_from_cel = celsius_to_fah(cel);
        double cel_from_fah = fahrenheit_to_cels(fah);
        cout << cel << "\t\t" << fah_from_cel << "\t\t|\t" << fah << "\t\t\t" << cel_from_fah << endl;
    }
    return 0;
}