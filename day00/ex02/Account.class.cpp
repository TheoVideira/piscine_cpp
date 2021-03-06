#include "Account.class.hpp"

// Init Static Value
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


// Constructor
Account::Account(int initial_deposit){
    this->_nbCheckAmount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_amount = initial_deposit;
    this->_accountIndex = Account::_nbAccounts;
    Account::_totalAmount += initial_deposit;
    Account::_nbAccounts += 1;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
            << ";amount:" << this->_amount
            << ";created" << std::endl;
}

// Destructor
Account::~Account(void){
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
            << ";amount:" << this->_amount
            << ";closed" << std::endl;
}


// Getters
int Account::getNbAccounts(void) {
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void) {
    return Account::_totalAmount;
}

int Account::getNbDeposits(void) {
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return Account::_totalNbWithdrawals;
}


// Print all static variabkes
void Account::displayAccountsInfos(void){
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts
            << ";total:" << Account::_totalAmount
            << ";deposits:" << Account::_totalNbDeposits
            << ";withdrawals:" << Account::_totalNbWithdrawals 
            << std::endl;
}


// Functions
void Account::makeDeposit(int deposit){
    // Display provisional info
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
            << ";p_amount:" << this->_amount
            << ";deposit:" << deposit;
    
    // Do the deposit
    this->_amount += deposit;
    this->_nbDeposits += 1;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits += 1;

    // Provide updated info
    std::cout << ";amount:" << this->_amount
            << ";nb_deposits:" << this->_nbDeposits
            << std::endl ;
}

bool Account::makeWithdrawal(int withdrawal){
     // Display provisional info
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
            << ";p_amount:" << this->_amount;
    
    // Do the withdrawal
    if (this->_amount - withdrawal < 0){
        std::cout << ";withdrawal:refused" << std::endl ;
        return false;
    } else { 
        std::cout << ";withdrawal:" << withdrawal;
        this->_amount -= withdrawal;
        this->_nbWithdrawals += 1;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals += 1;
        // Display Updated info
        std::cout << ";amount:" << this->_amount
            << ";nb_withdrawals:" << this->_nbWithdrawals
            << std::endl ;
        return true;
    }
}

int Account::checkAmount(void) const{
    this->_nbCheckAmount += 1;
    return this->_amount;
}

void Account::displayStatus(void) const{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
            << ";amount:" << this->_amount
            << ";deposits:" << this->_nbDeposits
            << ";withdrawals:" << this->_nbWithdrawals 
            << std::endl;
}

void Account::_displayTimestamp(void){
    /*std::time_t time = std::time(NULL);
    struct tm *localTime = localtime(&time);

    // Printing timestamp
    std::cout << "[";
    std::cout << localTime->tm_year + 1900;
    std::cout << std::setfill('0') << std::setw(2) << localTime->tm_mon + 1;
    std::cout << std::setfill('0') << std::setw(2) << localTime->tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2) << localTime->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << localTime->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << localTime->tm_sec;
    std::cout << "] ";*/
    // Uncomment this if you want to compare with log provided by school
    std::cout << "[19920104_091532] ";
}

// Bonus
void Account::displayNbCheckAmount(void) const{
    std::cout << this->_nbCheckAmount;
}