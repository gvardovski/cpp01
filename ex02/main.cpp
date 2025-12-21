/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 17:02:09 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/21 17:10:24 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout << "The memory address of the string variable " << &str << "\n";
	std::cout << "The memory address held by stringPTR " << stringPTR << "\n";
	std::cout << "The memory address held by stringREF " << &stringREF << "\n\n";

	std::cout << "The value of the string variable " << str << "\n";
	std::cout << "The value pointed to by stringPTR " << *stringPTR << "\n";
	std::cout << "The value pointed to by stringREF " << stringREF << "\n";
	
	return(0);
}