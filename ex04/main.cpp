/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:44:42 by anarama           #+#    #+#             */
/*   Updated: 2024/09/29 21:22:45 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
	if (argc != 5) {
		std::cerr << "Wrong amount of arguments" << std::endl;
		return 1;
	}
	if (!argv[1] || !argv[2] || !argv[3]
		|| !argv[2][0]) {
		std::cerr << "Incorrect arguments!" << std::endl;
		return 1;
	}
	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open()) {
		std::cerr << "Failed to open file" << std::endl;
		return 1;
	}
	std::string line;
	while (std::getline(inputFile, line)) {
		
	}
}
