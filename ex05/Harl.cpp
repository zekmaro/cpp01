/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:45:09 by anarama           #+#    #+#             */
/*   Updated: 2024/10/03 17:25:41 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

Harl::Harl( void ) {
	this->_ptr_arr[0] = &Harl::debug;
	this->_ptr_arr[1] = &Harl::info;
	this->_ptr_arr[2] = &Harl::warning;
	this->_ptr_arr[3] = &Harl::error;
}

void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ) {
	std::string level1 = "DEBUG";
	std::string level2 = "INFO";
	std::string level3 = "WARNING";
	std::string level4 = "ERROR";
	std::string levels[4] = {level1, level2, level3, level4};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*_ptr_arr[i])();
		}
	}
}

Harl::~Harl( void ) {}