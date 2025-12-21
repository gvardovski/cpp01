/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:53:10 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/21 19:36:09 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main (int gc, char **gv)
{
	if (gc != 4)
	{
		std::cout<< "Error: Wrong number of arguments"<<std::endl;
		return (1);
	}
	if (gv[2][0] == 0 || gv[3][0] == 0)
	{
		std::cout << "Error: Search or replace string cannot be empty" << std::endl;
		return (1);
	}
	std::string ss = gv[2];
	std::string sr = gv[3];
	std::ifstream ifile(gv[1]);
	if (!ifile)
	{
		std::cout<< gv[1] <<" Error: can not open file"<<std::endl;
		return (1);
	}
	std::string outname(gv[1]);
	outname += ".replace";
	std::ofstream ofile(outname.c_str(),std::ios_base::trunc);
	if (!ofile)
	{
		std::cout<< outname <<" Error: can not create file"<<std::endl;
		ofile.close();
		return (1);
	}
	std::string buf;
	std::size_t pos;
	while (std::getline(ifile,buf))
	{
		pos = 0;
		while ((pos = buf.find(ss, pos)) != std::string::npos)
		{
			buf.erase(pos, ss.length());
			buf.insert(pos, sr);
			pos += sr.length();
		}
		ofile << buf;
		if (!ifile.eof())
			ofile << '\n';
	}
	if (ofile.bad())
	{
		std::cout << "Error: Failed to write to output file." << std::endl;
		ifile.close();
		ofile.close();
		return (1);
	}
	ifile.close();
	ofile.close();
	return (0);
}