/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:41:12 by anouri            #+#    #+#             */
/*   Updated: 2024/01/18 14:42:56 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
Zombie::Zombie(std::string name) : _name(name)
{
   std::cout << _name << " Zombie parametric constructor called" << std::endl;
}

Zombie::Zombie()
{  
   std::cout <<  "Zombie default constructor called" << std::endl;
}

Zombie::~Zombie()
{
   std::cout << _name << " has been detructed" << std::endl;
}


void Zombie::announce(void)
{
   std::cout << _name << " : " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::name_zombie(std::string name)
{
   _name = name;
}