#include <iostream>
#include <string>
#include <iomanip>
#define fixedFloat(x) fixed << setprecision(2) << (x) // float of 2 decimal places
using namespace std;


struct{
    string custName;
    float distKilometers;
    float totCost;
} receipt;


int main() {

    cout << "Hipster's Local Vinyl Records - Customer Order Details\n\n";

    cout << "Enter the customer's name: ";
    getline (cin, receipt.custName);
    // test: cout << "\n" << receipt.custName << "\n";

    cout << "Enter the distance in kilometers for delivery: ";
    cin >> receipt.distKilometers;

    cout << "Enter the cost of records purcased: ";
    cin >> receipt.totCost;

    struct{
        float delivCost = receipt.distKilometers*15;
        float purcaseCost = receipt.totCost*1.14;
    } endCosts;

    cout << "\nPurchase summary for " << receipt.custName << "\n";
    cout << "Delivery Cost: $" << fixedFloat(endCosts.delivCost) << "\n";
    cout << "Purchase Cost: $" << fixedFloat(endCosts.purcaseCost) << "\n";
    cout << "Total Cost:    $" << fixedFloat(endCosts.delivCost+endCosts.purcaseCost) << "\n";

    return 0;
}
