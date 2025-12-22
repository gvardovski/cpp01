/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:43:48 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/22 10:55:15 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.h"

Harl::Harl(){};

void	Harl::debug( void )
{
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}
void	Harl::info( void )
{
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put \n"
			 <<"enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}
void	Harl::warning( void)
{
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for\n"
			 <<"years, whereas you started working here just last month."<<std::endl;
}
void	Harl::error( void )
{
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
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
			(this->*funcion[i])();
			return;
		}
	}
	std::cout<<"Error: wrong level name"<<std::endl;
}

Harl::~Harl(){};