/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 14:49:27 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/21 16:32:41 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Zombie.hpp"

int main(void)
{
	int N = 5;

	std::cout << "Creating a horde of " << N << " zombies..." << std::endl;
	Zombie *zombiland = zombieHorde(N, "ZombiLand");

	if (zombiland == NULL)
	{
		std::cout << "Allocation failed" << std::endl;
		return (1);
	}

	std::cout << "Announcing horde:" << std::endl;
	for (int i = 0; i < N; i++)
	{
		zombiland[i].announce();
	}

	std::cout << "Deleting horde..." << std::endl;
	delete [] zombiland;
	
	return(0);
}