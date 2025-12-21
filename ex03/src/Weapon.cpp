/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 17:35:51 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/21 18:32:31 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type): type(type){}

void Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string &Weapon::getType() const
{
	return this->type;
}

Weapon::~Weapon(){}
