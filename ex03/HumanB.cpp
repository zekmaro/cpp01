/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:57:04 by anarama           #+#    #+#             */
/*   Updated: 2024/09/29 19:40:32 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanB.hpp"

HumanB::HumanB( void ) : _name(DEFAULT_NAME), _weapon(DEFAULT_WEAPON) {}

HumanB::HumanB( std::string name ) {
	this->_name = name;
}

HumanB::~HumanB( void ) {}

void	HumanB::attack( void ) {
	std::cout << this->_name << " attacks with their " 
		<< this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon *weapon ) {
	this->_weapon = weapon;
}
