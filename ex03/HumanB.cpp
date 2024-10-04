/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:57:04 by anarama           #+#    #+#             */
/*   Updated: 2024/10/04 12:19:12 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanB.hpp"

HumanB::HumanB( void ) : _weapon(DEFAULT_WEAPON), _name(DEFAULT_NAME) {}

HumanB::HumanB( std::string name ) : _name(name) {}

HumanB::~HumanB( void ) {}

void	HumanB::attack( void ) {
	std::cout << this->_name << " attacks with their " 
		<< this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon *weapon ) {
	this->_weapon = weapon;
}
