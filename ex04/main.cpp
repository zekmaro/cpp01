/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:44:42 by anarama           #+#    #+#             */
/*   Updated: 2024/10/04 13:14:20 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

std::string getUpdatedLine(std::string oldLine, std::string pattern, std::string replace) {
	std::string newLine;
	std::string temp_copy;
	std::size_t	pattern_start_index;
	std::size_t current_copy_start_index = 0;

	while ((pattern_start_index = oldLine.find(pattern, current_copy_start_index)) != std::string::npos) {
		temp_copy =  oldLine.substr(current_copy_start_index, pattern_start_index - current_copy_start_index);
		newLine += temp_copy;
		newLine += replace;
		if (!replace.empty() && replace.length() < pattern.length()) {
			current_copy_start_index = pattern_start_index + replace.length() + 1;
		} else {
			current_copy_start_index = pattern_start_index + pattern.length();
		}
	}
	newLine += oldLine.substr(current_copy_start_index);
	return newLine;
}

bool isValidInput(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Wrong amount of arguments" << std::endl;
		return false;
	}
	if (!argv[1] || !argv[2] || !argv[3]
		|| !argv[2][0]) {
		std::cerr << "Incorrect arguments!" << std::endl;
		return false;
	}
	return true;
}

int main(int argc, char **argv) {
	if (!isValidInput(argc, argv)) {
		return 1;
	}
	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open()) {
		std::cerr << "Failed to open file" << std::endl;
		return 1;
	}
	std::string outputFileName = argv[1];
	outputFileName += ".replace";
	std::ofstream outputFile(outputFileName.c_str());
	if (!outputFile.is_open()) {
		std::cerr << "Failed to open file" << std::endl;
		return 1;
	}
	std::string line;
	while (std::getline(inputFile, line)) {
		std::string modifiedLine = getUpdatedLine(line, argv[2], argv[3]);
		outputFile << modifiedLine << std::endl;
	}
	outputFile.close();
	inputFile.close();
}
