/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilin <emilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:09:18 by emilin            #+#    #+#             */
/*   Updated: 2024/12/22 18:18:04 by emilin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

//Intialize all static values
 int	Account::_nbAccounts = 0;
 int	Account::_totalAmount = 0;
 int    Account::_totalNbDeposits = 0;
 int	Account::_totalNbWithdrawals = 0;


Account::Account()
{}

Account::Account(int initial_deposit)
{
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_amount = initial_deposit;
    Account::_totalAmount += this->_amount;
    this->_accountIndex = this->getNbAccounts();
    Account::_displayTimestamp();
    std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->checkAmount()<<";created\n";
    Account::_nbAccounts++;
}

Account::~Account(void)
{
    Account::_displayTimestamp();
    std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->checkAmount()<<";closed\n";
    Account::_nbAccounts--;
}

int Account::getNbAccounts(void)
{
    return(Account::_nbAccounts);
}

int Account::getNbDeposits(void)
{
    return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return(Account::_totalNbWithdrawals);
}

int Account::getTotalAmount(void)
{
    return(Account::_totalAmount);
}

void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << \
		";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits() << \
		";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
   this->_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount + deposit ;
    std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
   Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << \
	this->_amount << ";withdrawal:";
	if (withdrawal > this->checkAmount())
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" << this->checkAmount() - withdrawal << \
		";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	return (true);

}

int Account::checkAmount(void) const
{
 return(this->_amount);
}

void Account::displayStatus(void) const
{
    Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits << \
		";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
    time_t now;
    struct tm *local_time;
    char buffer[20]; 

    now = time(NULL);
    local_time = localtime(&now);

    strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", local_time);

    std::cout << buffer;
}
