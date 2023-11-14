#include <iostream>
#include <string>
#include <iomanip>
#include <cmath> 
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
    cin >> loanInputs.loanAmount;

    cout <<"Enter the interest rate (%): ";
    cin >> loanInputs.interestRate;

    cout << "Enter the number of years: ";
    cin >> loanInputs.yearsAmount;

    double topOfFraction = loanInputs.interestRate/5200;
    // cout << topOfFraction << "\n";

    double bottomOfFractionLeft = (1 + topOfFraction);
    // cout << bottomOfFractionLeft << "\n";

    double bottomOfFractionRight = -52*loanInputs.yearsAmount;
    // cout << bottomOfFractionRight << "\n";

    double bottomOfFraction = 1 - pow(bottomOfFractionLeft, bottomOfFractionRight);
    // cout << bottomOfFraction << "\n";

    float weeklyLoanPayment = (topOfFraction/bottomOfFraction) * loanInputs.loanAmount;
    // cout << weeklyLoanPayment << "\n";


    cout << "\nYour weekly payment will be: $" << fixedFloat(weeklyLoanPayment) << "\n";

    return 0;
}
