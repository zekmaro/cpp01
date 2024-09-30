/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:10:34 by anarama           #+#    #+#             */
/*   Updated: 2024/09/30 16:24:41 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie* horde = zombieHorde(5, "Vitalii");
	for (int i = 0; i < 5; i++) {
		horde[i].announce();
	}
	delete[] horde;
}
