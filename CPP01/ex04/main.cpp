/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:19:40 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/04 16:18:04 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

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
	if (infile.is_open())
	{
		std::string buffer;
		std::ofstream outfile;
		outfile.open(filename + ".replace", std::ios::out | std::ios::trunc);
		if (outfile.is_open())
		{
			while (!infile.eof())
			{
				std::getline(infile, buffer);
				buffer = replaceStr(buffer, search, replace);
				outfile << buffer;
				if (!infile.eof())
					outfile << std::endl;
			}
			outfile.close();
			return (0);
		}
		else
		{
			infile.close();
			std::cerr << "Error !! Failed to open output file." << std::endl;
			return (1);
		}
		infile.close();
	}
	else
	{
		std::cerr << "Error!! Failed to open input file" << std::endl;
		return (1);
	}
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
		return (EXIT_FAILURE);
	}
	std::ifstream infile;
	infile.open(filename);
	if (infile.is_open())
	{
		if (!replaceAndWriteFile(infile, filename, findStr, replaceStr))
		{
			std::cout << "Successfully created file " << filename << ".replace" << std::endl;
			return (EXIT_SUCCESS);
		}
	}
	else
	{
		std::cerr << "Failed to open file." << std::endl;
		return (EXIT_FAILURE);
	}
}
