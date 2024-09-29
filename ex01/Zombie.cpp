/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:11:08 by anarama           #+#    #+#             */
/*   Updated: 2024/09/29 19:30:27 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie() : _name(DEFAULT_NAME){}

Zombie::Zombie( std::string name ) {
	this->_name = name;
}

Zombie::~Zombie() {
	std::cout << this->_name << " was destroyed!" << std::endl;
}

Zombie* zombieHorde( int N, std::string name ) {
	if (N <= 0) {
		std::cout << "Incorrect zombie amount!" << std::endl;
		return nullptr;
	}
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i] = Zombie(name);
	}
	return horde;
}