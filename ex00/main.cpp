/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:49:18 by anouri            #+#    #+#             */
/*   Updated: 2023/12/22 14:28:54 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void randomChump(std::string name);
Zombie *newZombie(std::string name);

int main()
{
    std::cout << std::endl << std::endl;
    Zombie *foo = newZombie("foo");
    (*foo).announce();
    delete(foo);
    std::cout << std::endl << std::endl;
    /*******************************/
    randomChump("Frankenstein");
    
    std::cout << std::endl << std::endl;
    return 0;
}