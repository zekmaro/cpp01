/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:45:09 by anarama           #+#    #+#             */
/*   Updated: 2024/10/04 11:09:29 by anarama          ###   ########.fr       */
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

Harl::~Harl( void ) {}

void Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain( std::string level ) {
	std::string level1 = "DEBUG";
	std::string level2 = "INFO";
	std::string level3 = "WARNING";
	std::string level4 = "ERROR";
	std::string levels[4] = {level1, level2, level3, level4};

	int start_index = -1;
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			start_index = i;
		}
	}
	switch (start_index) {
		case 0:
			(this->*_ptr_arr[0])();
		case 1:
			(this->*_ptr_arr[1])();
		case 2:
			(this->*_ptr_arr[2])();
		case 3:
			(this->*_ptr_arr[3])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}
