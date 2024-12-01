#include "investment.h"
#include <iostream>
#include <iomanip>

// Constructor to initialize the investment details
Investment::Investment(double t_initial_amount, double t_monthly_deposit, double t_annual_interest, int t_years)
    : m_initial_amount(t_initial_amount), m_monthly_deposit(t_monthly_deposit), m_annual_interest(t_annual_interest), m_years(t_years) {}

// Setters
void Investment::setInitialAmount(double t_initial_amount) {
    m_initial_amount = t_initial_amount;
}

void Investment::setMonthlyDeposit(double t_monthly_deposit) {
    m_monthly_deposit = t_monthly_deposit;
}

void Investment::setAnnualInterest(double t_annual_interest) {
    m_annual_interest = t_annual_interest;
}

void Investment::setYears(int t_years) {
    m_years = t_years;
}

// Getters
double Investment::getInitialAmount() const {
    return m_initial_amount;
}

double Investment::getMonthlyDeposit() const {
    return m_monthly_deposit;
}

double Investment::getAnnualInterest() const {
    return m_annual_interest;
}

int Investment::getYears() const {
    return m_years;
}

// Function to print for each year
void Investment::printDetails(int yearIndex, double balance, double interestEarnedThisYear) const {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << yearIndex << "\t\t$" << balance << "\t\t$" << interestEarnedThisYear << std::endl;
}

// Function to calculate balance without monthly deposits
double Investment::calculateBalanceWithoutMonthlyDeposit() const {
    double balance = m_initial_amount;
    double monthly_interest_rate = (m_annual_interest / 100) / 12;

    for (int year = 1; year <= m_years; ++year) {
        double interest_earned_this_year = 0.0;
        for (int month = 1; month <= 12; ++month) {
            double interest = balance * monthly_interest_rate;
            balance += interest;
            interest_earned_this_year += interest;
        }
        printDetails(year, balance, interest_earned_this_year);
    }

    return balance;
}

// Function to calculate balance with monthly deposits
double Investment::calculateBalanceWithMonthlyDeposit() const {
    double balance = m_initial_amount;
    double monthly_interest_rate = (m_annual_interest / 100) / 12;

    for (int year = 1; year <= m_years; ++year) {
        double interest_earned_this_year = 0.0;
        for (int month = 1; month <= 12; ++month) {
            balance += m_monthly_deposit;
            double interest = balance * monthly_interest_rate;
            balance += interest;
            interest_earned_this_year += interest;
        }
        printDetails(year, balance, interest_earned_this_year);
    }

    return balance;
}

// Function to display the table based on the balance calculation method
void Investment::displayTable(bool withMonthlyDeposit) const {
    std::cout << "Year\t\tYear End Balance\t\tInterest Earned" << std::endl;
    if (withMonthlyDeposit) {
        calculateBalanceWithMonthlyDeposit();
    } else {
        calculateBalanceWithoutMonthlyDeposit();
    }
}