/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 14:35:07 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/21 15:12:55 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string name): name(name){}

void Zombie::announce( void )
{
	std::cout<< this->name <<": BraiiiiiiinnnzzzZ...\n";
}	

Zombie::~Zombie()
{
	std::cout<< this->name << " is dead!" << "\n";
}