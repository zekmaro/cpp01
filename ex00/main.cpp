/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:39:08 by anarama           #+#    #+#             */
/*   Updated: 2024/09/29 16:44:39 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <random>

int main(void) {
	Zombie testZombie("First Evaluator");
	testZombie.announce();
	Zombie* evaluator = newZombie("Second evaluator");
	evaluator->announce();
	delete evaluator;
}