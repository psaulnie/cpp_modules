/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaulnie <psaulnie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 09:40:16 by psaulnie          #+#    #+#             */
/*   Updated: 2022/09/01 14:56:37 by psaulnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

int	replace(std::string str, std::ofstream &new_file, std::string old_str, std::string new_str)
{
	int			len = old_str.length();
	int			i;

	i = str.find(old_str);
	while (i != -1)
	{
		str.erase(i, len);
		str.insert(i, new_str);
		i = str.find(old_str, i + 1);
	}
	new_file << str;
	return (1);
}

int	read_file(std::ifstream& file, std::string filename, std::string old_str, std::string new_str)
{
	std::string		new_file_name;
	std::ofstream	new_file;
	std::string		str;
	char	buffer[2];
	char	c = file.get();

	new_file_name = filename.append(".replace");
	new_file.open(new_file_name.c_str(), std::ofstream::out);
	if (new_file.fail())
	{
		std::cout << "Failed to open the new file" << std::endl;
		return (0);
	}
	buffer[0] = c;
	buffer[1] = '\0';
	while(file.good())
	{
		str.append(buffer);
		c = file.get();
		buffer[0] = c;
	}
	if (replace(str, new_file, old_str, new_str))
		return (1);
	std::cout << "Error at replacing lines" << std::endl;
	return (0);
}

int	main(int argc, char *argv[])
{
	std::ifstream	file;
	std::string		old_str;

	if (argc != 4)
	{
		std::cout << "Wrong arguments number" << std::endl;
		return (0);
	}
	old_str = argv[2];
	file.open(argv[1], std::ifstream::in);
	if (file.fail())
	{
		std::cout << "The file can't be opened !" << std::endl;
		return (0);
	}
	else if (old_str == "")
	{
		std::cout << "You can't replace something empty !" << std::endl;
		return (0);
	}
	if (read_file(file, argv[1], argv[2], argv[3]))
	{
		file.close();
		return (1);
	}
	file.close();
	return (0);
}