/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:40:01 by anarama           #+#    #+#             */
/*   Updated: 2024/09/30 16:07:31 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie() : _name(DEFAULT_NAME){}

Zombie::Zombie( std::string name ) : _name(name) {}

Zombie::~Zombie() {
	std::cout << this->_name << " was destroyed!" << std::endl;
}

void Zombie::announce( void ) {
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie( std::string name ) {
	return new Zombie(name);
}

void randomChump( std::string name ) {
	Zombie tempZombie(name);
	tempZombie.announce();
}
