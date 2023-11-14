#include <iostream>
#include <string>
#include <iomanip>
#define fixedFloat(x) fixed << setprecision(2) << (x) // float of 2 decimal places
using namespace std;


struct{
    int loanAmount;
    float interestRate;
    int yearsAmount;
} loanInputs;


int main() {
    cout << "Weekly Loan Calculator\n\n";

    cout << "Enter the amount of loan: $";
    cin >> loanInputs.loanAmount

    cout <<"\nEnter the interest rate (%): "
    cin >> loanInputs.interestRate;

    cout << "\nEnter the number of years: ";
    cin >> loanInputs.yearsAmount;

    cout << "\nYour weekly payment will be: $"


    return 0;
}
