/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:11:08 by anarama           #+#    #+#             */
/*   Updated: 2024/10/04 12:14:09 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie() : _name(DEFAULT_NAME) {}

Zombie::Zombie( std::string name ) : _name(name) {}

Zombie::~Zombie() {
	std::cout << this->_name << " was destroyed!" << std::endl;
}

void Zombie::announce( void ) {
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name ) {
	this->_name = name;
}

Zombie* zombieHorde( int N, std::string name ) {
	if (N <= 0) {
		std::cout << "Incorrect zombie amount!" << std::endl;
		return NULL;
	}
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i].setName(name);
	}
	return horde;
}