#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	std::string	line;
	std::string	find;
	std::string	replace;
	std::string	filename;
	std::string	new_filename;
	std::ifstream	file_read;
	std::ofstream	file_write;
	size_t		pos;
	size_t		find_len;
	size_t		replace_len;

	if (!(ac == 4))
	{
		std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	if (!av[1] || !av[2])
	{
		std::cout << "The parameter cannot be empty" << std::endl;
		return (1);
	}

	filename = av[1];
	new_filename = av[1];
	new_filename += ".replace";
	find = av[2];
	find_len = find.length();
	replace = av[3];
	replace_len = replace.length();

	file_read.open(filename.c_str());
	if (!file_read.is_open())
	{
		std::cout << "Error: Cannot open file!" << std::endl;
		return 1;
	}

	file_write.open(new_filename.c_str());
	if (!file_write.is_open())
	{
		std::cout << "Error: Cannot open file!" << std::endl;
		file_read.close();
		return 1;
	}

	while (getline(file_read, line))
	{
		pos = line.find(find, 0);
		while (pos != std::string::npos)
		{
			line.erase(pos, find_len);
			line.insert(pos, replace);
			pos = line.find(find, (pos + replace_len));
		}
		file_write << line << std::endl;
	}

	file_read.close();
	file_write.close();
	return (0);
}
