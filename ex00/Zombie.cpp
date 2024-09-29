/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:40:01 by anarama           #+#    #+#             */
/*   Updated: 2024/09/29 15:46:00 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

void Zombie::announce( void ) {
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}