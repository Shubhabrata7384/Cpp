#include <iostream>
using namespace std;

// Function to calculate simple interest
// Default value of rate is set to 15%
double calculateSimpleInterest(double principal, double time, double rate = 15) {
    return (principal * time * rate) / 100;
}

int main() {
    double principal, time, rate;
    char choice;

    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the time (in years): ";
    cin >> time;

    // Asking user if they want to enter a custom rate of interest
    cout << "Do you want to enter a custom rate of interest? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        cout << "Enter the rate of interest: ";
        cin >> rate;
    } else {
        rate = 15; // Default rate
    }

    // Calculating simple interest
    double interest = calculateSimpleInterest(principal, time, rate);
    cout << "The Simple Interest is: " << interest << endl;

    return 0;
}

