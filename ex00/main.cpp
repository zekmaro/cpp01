/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:39:08 by anarama           #+#    #+#             */
/*   Updated: 2024/09/30 18:49:56 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie evaluator1("First Evaluator");
	evaluator1.announce();
	Zombie* evaluator2 = newZombie("Second Evaluator");
	evaluator2->announce();
	randomChump("Third Evaluator");
	delete evaluator2;
}