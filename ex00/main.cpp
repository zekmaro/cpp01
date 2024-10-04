/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:39:08 by anarama           #+#    #+#             */
/*   Updated: 2024/10/04 12:08:54 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

int main(void) {
	try {
		Zombie evaluator1("First Evaluator");
		evaluator1.announce();
		Zombie* evaluator2 = newZombie("Second Evaluator");
		evaluator2->announce();
		randomChump("Third Evaluator");
		delete evaluator2;
	}
	catch (const std::bad_alloc &e) {
		std::cerr << "Memory allocation failed: " << e.what() << '\n';
        return 1;
	}
	return 0;
}