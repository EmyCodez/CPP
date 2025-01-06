/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:19:40 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/06 16:01:39 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <sys/stat.h>

bool	isFile(std::string &filename)
{
	struct stat	fileDetails;

	if ((stat(filename.c_str(), &fileDetails) == 0)
		&& (fileDetails.st_mode & S_IFREG))
		return (true);
	else
	{
		std::cerr << "Error !! Not a valid file." << std::endl;
		return (false);
	}
}

std::string replaceStr(std::string buffer, const std::string search,
		const std::string replace)
{
	size_t	replaceLen;
	size_t	position;
	size_t	searchLen;

	searchLen = search.length();
	replaceLen = replace.length();
	position = 0;
	position = buffer.find(search);
	while (position != std::string::npos)
	{
		buffer.erase(position, searchLen);
		buffer.insert(position, replace);
		position = buffer.find(search, position + replaceLen);
	}
	return (buffer);
}

int	replaceAndWriteFile(std::ifstream &infile, std::string &filename,
		const std::string search, const std::string replace)
{
	if (!infile.is_open())
	{
		std::cerr << "Error!! Failed to open input file" << std::endl;
		return (1);
	}
	std::string buffer;
	std::ofstream outfile;
	outfile.open(filename + ".replace", std::ios::out | std::ios::trunc);
	if (!outfile.is_open())
	{
		infile.close();
		std::cerr << "Error !! Failed to open output file." << std::endl;
		return (1);
	}
	while (std::getline(infile, buffer))
	{
		buffer = replaceStr(buffer, search, replace);
		outfile << buffer;
		if (!infile.eof())
			outfile << std::endl;
	}
	outfile.close();
	infile.close();
	std::cout << "Successfully created file " << filename << ".replace" << std::endl;
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <find_string> <replace_string>" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string filename = argv[1];
	std::string findStr = argv[2];
	std::string replaceStr = argv[3];
	if (findStr.empty())
	{
		std::cerr << "Error: The string to find cannot be empty." << std::endl;
		return (1);
	}
	std::ifstream infile;
	infile.open(filename);
	if (!isFile(filename))
		return (1);
	if (!infile.is_open())
	{
		std::cerr << "Failed to open file." << std::endl;
		return (1);
	}
	replaceAndWriteFile(infile, filename, findStr, replaceStr);
	return (0);
}
