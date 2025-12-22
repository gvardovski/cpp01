/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:43:48 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/22 11:54:10 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.h"

Harl::Harl(){};

void	Harl::debug( void )
{
	std::cout<<"DEBUG MESSAGE\n"<<std::endl;
}
void	Harl::info( void )
{
	std::cout<<"INFO MESSAGE\n"<<std::endl;
}
void	Harl::warning( void)
{
	std::cout<<"WARNING MESSAGE\n"<<std::endl;
}
void	Harl::error( void )
{
	std::cout<<"ERROR MESSAGE\n"<<std::endl;
}

void Harl::complain_switch(int i, void (Harl::*funcion[])())
{
	for (int j = 0 + i; j < 4; j++)
		(this->*funcion[j])();
}

void Harl::complain( std::string level )
{
	int i = -1;
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Harl::*funcion[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	while (++i < 4)
	{
		if (levels[i] == level)
		{
			switch (i)
			{
				case 0:
				{
					complain_switch(i, funcion);
					break;
				}
				case 1:
				{
					complain_switch(i, funcion);
					break;
				}
				case 2:
				{
					complain_switch(i, funcion);
					break;
				}
				case 3:
				{
					complain_switch(i, funcion);
					break;
				}
			}
			return;
		}
	}
	std::cout<<"Error: wrong level name"<<std::endl;
}

Harl::~Harl(){};