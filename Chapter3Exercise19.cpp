/*Program File Name: Chapter3Exercise19
Programmer: Patrick Liao
Date: 2.16.2025
Requirements:  */

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    double mpayment;
    double loan;
    double mrate;
    double numpay;                                                                   //instantiate variables

    cout << "Please enter the amount of the loan: ";
    cin >> loan;
    cout << "\nPlease enter the monthly interest rate on the account: ";
    cin >> mrate;
    cout << "\nPlease enter the number of payments: ";
    cin >> numpay;                                                                   //prompt and get user values

    mpayment = (((mrate / 100) * pow((1 + (mrate / 100)), numpay)) /
        (pow((1 + (mrate / 100)), numpay) - 1)) * loan;                             //calculate amount using user values

    cout << std::fixed << std::setprecision(2)
        << "\nLoan Amount:                $" << setw(10)<< loan 
        << "\nMonthly Interest Rate:       " << setw(10) << mrate << "%"
        << "\nNumber of Payments:          " << setw(10) << numpay
        << "\nMonthly Payments:           $" << setw(10) << mpayment
        << "\nAmount Paid Back:           $" << setw(10) << mpayment * numpay
        << "\nInterest Paid:              $" << setw(10) << (mpayment * numpay) - loan;                               //display values
        
    return 0;
}
