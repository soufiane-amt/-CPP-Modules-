/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:55:50 by samajat           #+#    #+#             */
/*   Updated: 2022/08/28 21:56:54 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

//index:0;amount:42;created
Account::Account(int initial_deposit)
{
    this->_displayTimestamp();
    this->_accountIndex = this->_nbAccounts;
    this->_amount = initial_deposit;
    this->_totalAmount += initial_deposit;
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount\
    << "created"<< std::endl;
    this->_nbAccounts++;
}

Account::Account(void)
{
    this->_displayTimestamp();
    this->_accountIndex = this->_nbAccounts;
    this->_amount = 0;
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount\
    << "created"<< std::endl;
    this->_nbAccounts++;
}
Account::~Account(void)
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount\
    << "closed"<< std::endl;
    this->_nbAccounts++;
}

//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void    Account::displayStatus(void) const
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount\
    << "deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals<< std::endl;
}

//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount\
    << "deposits:" << _totalNbDeposits<< ";withdrawals:" << _totalNbWithdrawals<< std::endl;
}

void    Account::_displayTimestamp(void)
{
    time_t curr_time;
    tm *_tm;
    std::string timeStamp;
    std::string month;
    std::string day;
    std::string year;
    
    curr_time = time(0);
    _tm = gmtime(&curr_time);
    month = std::to_string(_tm->tm_mon);
    day = std::to_string(_tm->tm_mday);
    year = std::to_string(_tm->tm_year + 1900);
    if (month.length() == 1)
        month = "0" + month;
    if (day.length() == 1)
        day = "0" + day;
	std::cout << "[" + year + month + day + "]  ";
}

int main()
{
    Account a(1);
}