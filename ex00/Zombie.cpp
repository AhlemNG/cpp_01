/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:41:12 by anouri            #+#    #+#             */
/*   Updated: 2024/01/18 14:05:35 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie(std::string name)
{
   _name = name;
   std::cout << _name << " has been constructed" << std::endl;

}

Zombie::~Zombie()
{
   std::cout << _name << " has been detructed" << std::endl;
}


void Zombie::announce(void)
{
   std::cout << _name << " : " << "BraiiiiiiinnnzzzZ..." << std::endl;
}