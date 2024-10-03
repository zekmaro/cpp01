/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:44:42 by anarama           #+#    #+#             */
/*   Updated: 2024/10/03 11:59:19 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string getUpdatedLine(std::string oldLine, std::string pattern) {
	std::string newLine;
	std::string temp_copy;
	std::size_t	pattern_start_index;
	std::size_t current_copy_start_index = 0;

	while ((pattern_start_index = oldLine.find(pattern)) != std::string::npos) {
		temp_copy =  oldLine.substr(current_copy_start_index, pattern_start_index);
		newLine += temp_copy;
		newLine += pattern;
		current_copy_start_index = pattern_start_index + pattern.length();
	}
	newLine += oldLine.substr(current_copy_start_index);
}

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
	// if (argv[2] == argv[3]) { add logic
		
	// }
	// create output stream
	std::string line;
	while (std::getline(inputFile, line)) {
		std::string modifiedLine = getUpdatedLine(line, argv[3]);
	}
}
