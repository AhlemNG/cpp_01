/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:41:12 by anouri            #+#    #+#             */
/*   Updated: 2024/01/02 12:56:21 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie(std::string name)
{
   _name = name;
}

Zombie::~Zombie()
{
}


void Zombie::announce(void)
{
   std::cout << _name << " : " << "BraiiiiiiinnnzzzZ..." << std::endl;
}