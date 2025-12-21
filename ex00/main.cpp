/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 14:49:27 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/21 15:20:59 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

int main(void)
{
	Zombie *z1 = newZombie("Foo");
	z1->announce();
	delete z1;
	randomChump("Voo");
	return(0);
}