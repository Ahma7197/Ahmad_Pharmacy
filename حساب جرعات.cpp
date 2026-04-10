#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight;
    double dosePerKg;
    double totalDose;
    int choice;

    cout << " ★★★★★★★★★★★★★★★★★" << endl;
    cout << " Medication Dosage Calculator " << endl;
    cout << " ★★★★★★★★★★★★★★★★★" << endl;

    cout << "Enter patient weight (kg): ";
    cin >> weight;

    cout << "Enter dosage per kg (mg/kg): ";
    cin >> dosePerKg;

    if (weight <= 0 || dosePerKg <= 0) {
        cout << "Invalid input. Values must be positive." << endl;
    } else {
        totalDose = weight * dosePerKg;

        cout << fixed << setprecision(2);
        cout << "------------------------------" << endl;
        cout << "Patient weight: " << weight << " kg" << endl;
        cout << "Dosage per kg: " << dosePerKg << " mg/kg" << endl;
        cout << "Total dosage: " << totalDose << " mg" << endl;
        cout << "------------------------------" << endl;

        cout << "Is this for an adult or child?" << endl;
        cout << "1. Adult" << endl;
        cout << "2. Child" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 2) {
            cout << "Note: Pediatric dosages should be verified by a pharmacist." << endl;
        }
    }

    cout << "Program finished." << endl;
    return 0;
}