/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:39:27 by anouri            #+#    #+#             */
/*   Updated: 2023/12/22 17:11:24 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string& stringREF = str;

    std::cout << std::endl;
    std::cout << "The memory address of the string variable: "<< &str << std::endl;
    std::cout << "The memory address held by stringPTR:      "<< stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:      "<< &stringREF << std::endl;
    std::cout << std::endl;
    

    std::cout << "The value of the string variable:  "<< str << std::endl;
    std::cout << "The value pointed to by stringPTR: "<< *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: "<< stringREF << std::endl;
    std::cout << std::endl;
    
    return 0;
}