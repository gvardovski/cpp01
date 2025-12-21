/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:22:58 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/21 18:31:33 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name): name(name), B(NULL) {}

void HumanB::attack(void)
{
	if (this->B == NULL)
		std::cout<< this->name << " has not obtained any weapon yet !! " << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->B->getType() << "\n";
}

void HumanB::setWeapon(Weapon &B)
{
	this->B = &B;
}

HumanB::~HumanB(){}