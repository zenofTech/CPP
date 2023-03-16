#include <iostream>
using namespace std;
 
int main() // main - main is the place were the execution starts.
{       // credits to the Creator zenOfTech.
        cout << "\n\t\t***************************************************\n";
        cout << "\t\tTemperature in Fahrenheit to Celsius Converter\n";
        cout << "\t\t\t\t***Created by Z3n0fT3ch***\n";
        cout << "\t\t***************************************************\n";
    float fahrenheit, celsius;  // declaring varible names
    cout << " Input the temperature in Fahrenheit : ";   // Asking user for input
    cin >> fahrenheit;  // accepting user input
    celsius = ((fahrenheit * 5.0)-(5.0 * 32))/9; // doing the conversion
    cout << " The temperature in Fahrenheit : " << fahrenheit << "\n"; //giving the output fahrenheit
    cout << " The temperature in Celsius : " << celsius << "\n"; //giving the output in celsius
    return 0;
}