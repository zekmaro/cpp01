/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:44:52 by anarama           #+#    #+#             */
/*   Updated: 2024/10/04 11:09:23 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "[ WOW! No complains at all? Can it be a dream? ]" << std::endl;
		return 0;
	}
	if (argc > 2) {
		std::cout << "[ Chill... Not so many complains. I will call the manager... ]" << std::endl;
		return 0;
	}
	Harl harl;
	harl.complain(argv[1]);
	return 0;
}