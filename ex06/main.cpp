/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:39:46 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/22 11:42:09 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Harl.h"

int main()
{
	Harl harl;

	std::cout << "--- DEBUG level ---" << std::endl;
	harl.complain("DEBUG");
	std::cout << "--- INFO level ---" << std::endl;
	harl.complain("INFO");
	std::cout << "--- WARNING level ---" << std::endl;
	harl.complain("WARNING");
	std::cout << "--- ERROR level ---" << std::endl;
	harl.complain("ERROR");
	std::cout << "--- MISTAKE level ---" << std::endl;
	harl.complain("MISTAKE");
	
	return (0);
}