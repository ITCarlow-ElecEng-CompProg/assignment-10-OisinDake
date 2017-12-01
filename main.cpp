//Oisin Dake
//Lab 10
//555 Timer Astable Multivibrator Calculations

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void timerCalculator(double res1, double res2, double cap, double *freq, double *duty)//function
{
    *freq = (1.44/((res1+(res2*2))*cap));//equations
    *duty = (res1+res2)/(res1+(res2*2))*100;

    return;
}

int main(void)
{
    // variable declarations
    double res1,res2, cap, freq, duty;// store values
    double *ptr_freq, *ptr_duty;// record address

    // initialize pointers
    ptr_freq = &freq;
    ptr_duty = &duty;

    //cout << "calculate both the output frequency and duty cycle of a 555 timer configured as an astable multivibrator\n" << endl;
    cout << "555 Timer Astable Multivibrator\n" << endl;

    do
    {
        cout << "Enter the value of resistor one: ";//do loop to ensure input is < or equal to0
        cin >> res1;
    }
    while (res1 <= 0);

    do
    {
        cout << "Enter the value of resistor two: ";//do loop to ensure input is <  or equal to 0
        cin >> res2;
    }
    while (res2 <= 0);

    do
    {
        cout << "Enter the value of capacitor: ";//do loop to ensure input is < or equal to 0
        cin >> cap;
    }
    while (cap <= 0);
    timerCalculator(res1,res2,cap, ptr_freq, ptr_duty);

    cout << fixed;
    cout.precision(2);
    cout << "\nFrequency = " << freq << " Hz" << endl;// to display
    cout << "Duty cycle = "  << duty << "%" << endl;

    return 0;
}
