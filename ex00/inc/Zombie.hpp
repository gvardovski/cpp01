/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 14:33:56 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/21 15:12:24 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
#define ZOMBIE_CLASS_H

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;	

public:
	Zombie(std::string);
	~Zombie();
	
	void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif