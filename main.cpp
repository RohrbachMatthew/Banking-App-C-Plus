#include <iostream>
#include "investment.h"

int main() {
    double initial_amount, monthly_deposit, annual_interest;
    int years;

    // Prompt user for input
    std::cout << "Initial Investment Amount: ";
    std::cin >> initial_amount;
    std::cout << "Monthly Deposit: ";
    std::cin >> monthly_deposit;
    std::cout << "Annual Interest: ";
    std::cin >> annual_interest;
    std::cout << "Number of Years: ";
    std::cin >> years;

    // Wait for user to press any key
    std::cout << "Press any key to continue.";
    std::cin.ignore(); // Ignore the newline
    std::cin.get(); // Wait for user to press any key

    // Creates an Investment object
    Investment investment(initial_amount, monthly_deposit, annual_interest, years);

    // Displays the table with monthly deposits
    std::cout << "\nWith monthly deposits:" << std::endl;
    investment.displayTable(true);

    // Displays the table without monthly deposits
    std::cout << "\nWithout monthly deposits:" << std::endl;
    investment.displayTable(false);

    return 0;
}