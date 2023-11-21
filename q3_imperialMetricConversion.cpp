#include <iostream>
#include <string>
#include <iomanip>
#include <cmath> 
#define fixedFloat(x) fixed << setprecision(1) << (x) // float of 1 decimal place
using namespace std;

struct{
    int tonsAmount;
    int stoneAmount;
    int poundsAmount;
    int ouncesAmount;
} imperial;


int main() {
    cout << "Imperial To Metric Conversion!\n\n";
    // input
    cout << "Enter the number of tons: ";       // tons
    cin >> imperial.tonsAmount;
    cout << "Enter the number of stone: ";  // stone
    cin >> imperial.stoneAmount;
    cout << "Enter the number of pound: ";  // pounds
    cin >> imperial.poundsAmount;
    cout << "Enter the number of ounces: "; // ouncea
    cin >> imperial.ouncesAmount;

    //process

    // calculate total ounces
    int totalOunce = (imperial.poundsAmount * 16) + (imperial.stoneAmount * 224) + (imperial.tonsAmount * 35840) + imperial.ouncesAmount;
    // calculate total grams
    double totalGrams = (totalOunce / 35.274)*1000;

    struct{
        int tons;
        int kilos;
        float grams;
    } final;

    // calculate final tons
    final.tons = totalGrams/1000000;
    totalGrams = totalGrams-(final.tons*1000000); // how many grams are left after that

    // calculate total kilograms
    final.kilos = totalGrams/1000;
    final.grams = totalGrams-(final.kilos*1000); // and the remaining amount of tons is how many are left after

    cout << "\nYour metric weight is " << final.tons << " metric tons, " << fixedFloat(final.kilos) << " kilos, and " << final.grams << " grams.\n";
    return 0;
}
