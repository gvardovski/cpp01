/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:13:16 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/21 18:18:29 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &A): name(name), A(A) {}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->A.getType() << "\n";
}

HumanA::~HumanA(){}