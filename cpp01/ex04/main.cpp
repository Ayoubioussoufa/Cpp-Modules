/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:34:30 by aybiouss          #+#    #+#             */
/*   Updated: 2023/06/06 17:34:30 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 4)
		std::cerr << "./prog Filename s1 s2" << std::endl;
	else
	{	
		std::ifstream	myfile(av[1]);
		if (!myfile)
		{
    		std::cerr << "Error opening file " << av[1] << std::endl;
    		return 1;
  		}
		std::string		line;
		std::ofstream	replacement;
		replacement.open((std::string(av[1]) + ".replace"));
		if (replacement.fail())
			return 1;
		std::getline(myfile, line, '\0');
		std::string s1(av[2]);
		std::string s2(av[3]);
		size_t npos = 0;
		int i = 0;
    	while (s1 != "" && npos < line.length())
    	{
			npos = line.find(s1, npos);
			if (npos == std::string::npos)
				break;
			line.erase(npos, s1.length());
			line.insert(npos, s2);
			npos += s2.length();
			i++;
    	}
		replacement << line;
		replacement.close();
	}
	return 0;
}
