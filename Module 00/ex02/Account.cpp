/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:01:15 by samajat           #+#    #+#             */
/*   Updated: 2022/09/22 19:29:57 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account ::_nbAccounts = 0;
int	Account ::_totalAmount = 0;
int	Account ::_totalNbDeposits = 0;
int	Account ::_totalNbWithdrawals = 0;

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

int Account::checkAmount(void) const
{
    return (this->_amount);
}

Account::Account(int initial_deposit)
{
    this->_displayTimestamp();
    this->_accountIndex = this->_nbAccounts;
    this->_amount = initial_deposit;
    this->_totalAmount += initial_deposit;
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount\
    << ";created"<< std::endl;
    this->_nbAccounts++;
}

Account::Account(void)
{
    this->_displayTimestamp();
    this->_accountIndex = this->_nbAccounts;
    this->_amount = 0;
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount\
    << ";created"<< std::endl;
    this->_nbAccounts++;
}
Account::~Account(void)
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount\
    << ";closed"<< std::endl;
}

void    Account::displayStatus(void) const
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount\
    << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals<< std::endl;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount\
    << ";deposits:" << _totalNbDeposits<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::_displayTimestamp(void)
{
    time_t curr_time;
    tm *_tm;
    std::string timeStamp;
    std::string month;
    std::string day;
    std::string year;
    std::string hour;
    std::string min;
    std::string sec;
    
    curr_time = time(0);
    _tm = gmtime(&curr_time);
    month = std::to_string(_tm->tm_mon);
    day = std::to_string(_tm->tm_mday);
    year = std::to_string(_tm->tm_year + 1900);
    hour = std::to_string(_tm->tm_hour + 1);
    min = std::to_string(_tm->tm_min);
    sec = std::to_string(_tm->tm_sec);
    if (month.length() == 1)
        month = "0" + month;
    if (day.length() == 1)
        day = "0" + day;
    if (hour.length() == 1)
        hour = "0" + hour;
    if (min.length() == 1)
        min = "0" + min;
    if (sec.length() == 1)
        sec = "0" + sec;
	std::cout << "[" + year + month + day + "_" + hour + min + sec + "]  ";
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:"<< this->_amount << ";deposit:" << deposit;
    this->_amount += deposit;
    this->_totalAmount += deposit;
    this->_nbDeposits += 1;
    this->_totalNbDeposits += 1;
    std::cout << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:"<< this->_amount;
    std::cout << ";withdrawal:";
    if (withdrawal > this->_amount)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    this->_amount -= withdrawal;
    this->_totalAmount -= withdrawal;
    this->_nbWithdrawals += 1;
    this->_totalNbWithdrawals += 1;
    std::cout << withdrawal << ";amount:" << this->_amount\
    << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}