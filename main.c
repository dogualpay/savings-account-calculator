#include <stdio.h>

/// <Change these>
#define YEARS_TO_SHOW 50
#define YEARLY_INTEREST_PERCENTAGE 5
#define STARTING_AMOUNT 2000
#define MONTHLY_PAYMENT 2000 // Monthly addition to your account. (Your net income will be added to your account automatically.)
/// <Change these, end>

double monthly(const double monthly_interest, double bank_account){
    return bank_account*monthly_interest/100;
}

int main()
{
    double bank_account = STARTING_AMOUNT;
    double monthly_payment = MONTHLY_PAYMENT;
    const double yearly_interest = YEARLY_INTEREST_PERCENTAGE;
    const double monthly_interest = yearly_interest/12;
    double monthly_income = 0;
    double yearly_income = 0;
    
    for(int i=1; i<=YEARS_TO_SHOW; i++){
        for(int j=1; j<=12; j++){
            monthly_income = monthly(monthly_interest, bank_account);
            yearly_income += monthly_income;
            bank_account += monthly_income + monthly_payment;
        }
        printf("Year %2d:\n", i);
        printf("Yearly net income: %20lf, Bank Account: %20lf \n", yearly_income, bank_account);
        yearly_income=0.0;
    }

    return 0;
}
