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
        << "\nLoan Amount: $" << loan 
        << "\nMonthly Interest Rate: " << mrate << "%"
        << "\nNumber of Payments: " << numpay
        << "\nMonthly Payments: $" << mpayment
        << "\nAmount Paid Back: $" << mpayment * numpay
        << "\nInterest Paid: $" << (mpayment * numpay) - loan;                               //display values

    return 0;
    return 0;
}
