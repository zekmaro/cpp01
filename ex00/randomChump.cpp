/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:56:59 by anarama           #+#    #+#             */
/*   Updated: 2024/10/04 11:57:33 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Zombie.hpp"

void randomChump( std::string name ) {
	Zombie tempZombie(name);
	tempZombie.announce();
}
