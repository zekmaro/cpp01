/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:56:54 by anarama           #+#    #+#             */
/*   Updated: 2024/09/29 19:39:27 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _weapon(weapon), _name(name) {}

HumanA::~HumanA( void ) {}

void	HumanA::attack( void ) {
	std::cout << this->_name << " attacks with their " 
		<< this->_weapon.getType() << std::endl;
}

void	HumanA::setWeapon( Weapon &weapon ) {
	this->_weapon = weapon;
}
