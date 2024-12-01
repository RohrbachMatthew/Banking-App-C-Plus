#ifndef AIRGEAD_BANKING_INVESTMENT_H_
#define AIRGEAD_BANKING_INVESTMENT_H_

class Investment {
public:
    Investment(double t_initial_amount, double t_monthly_deposit, double t_annual_interest, int t_years);
    void setInitialAmount(double t_initial_amount);
    void setMonthlyDeposit(double t_monthly_deposit);
    void setAnnualInterest(double t_annual_interest);
    void setYears(int t_years);
    double getInitialAmount() const;
    double getMonthlyDeposit() const;
    double getAnnualInterest() const;
    int getYears() const;
    double calculateBalanceWithoutMonthlyDeposit() const;
    double calculateBalanceWithMonthlyDeposit() const;
    void displayTable(bool withMonthlyDeposit) const;

private:
    double m_initial_amount;
    double m_monthly_deposit;
    double m_annual_interest;
    int m_years;
    void printDetails(int yearIndex, double balance, double interestEarnedThisYear) const;
};

#endif // AIRGEAD_BANKING_INVESTMENT_H_