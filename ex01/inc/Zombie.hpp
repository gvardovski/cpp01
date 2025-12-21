/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 14:33:56 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/21 16:31:33 by svolkau          ###   ########.fr       */
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
	Zombie();	
	~Zombie();
	
	void setName(std::string);
	void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif