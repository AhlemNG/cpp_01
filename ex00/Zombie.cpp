/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:41:12 by anouri            #+#    #+#             */
/*   Updated: 2023/12/22 14:20:20 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie(std::string name)
{
   _name = name;
}

Zombie::~Zombie()
{
   std::cout << _name << " has been detructed" << std::endl;
}


void Zombie::announce(void)
{
   std::cout << _name << " : " << "BraiiiiiiinnnzzzZ..." << std::endl;
}