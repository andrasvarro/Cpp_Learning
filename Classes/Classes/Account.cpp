#include "Account.h"

using namespace std;

Account::Account(void) :balance(0)
{

}

vector<string> Account::Report()
{
    vector<string> report;
    report.push_back("Balance is " + to_string(balance));
    report.push_back("Transactions: ");
    for (auto t : log)
    {
        report.push_back(t.Report());
    }

    report.push_back("----------------");
    return report;
}

bool Account::Deposit(int amt)
{
    if (amt >= 0)
    {
        balance += amt;
        
        log.push_back(Transaction(amt,"Deposit"));
        return true;
    }

    log.push_back(Transaction(amt, "Failed_Deposit"));
    return false;
}

bool Account::Withdraw(int amt)
{
    if (amt > balance || amt <= 0)
    {
        log.push_back(Transaction(amt, "Failed_Withdraw"));
        return false;
    }
    
    balance -= amt;
    log.push_back(Transaction(amt, "Withdraw"));
    return true;
}

//int Account::GetBalance()
//{
//    return balance;
//}

