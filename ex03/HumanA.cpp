/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 09:49:17 by anouri            #+#    #+#             */
/*   Updated: 2023/12/26 15:38:02 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string const &name, Weapon &weapon): _name(name) ,_weapon(weapon)
{
    std::cout << _name << " was created" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << _name << " was destructed" << std::endl;
}

void HumanA::attack()
{
    std::cout <<  _name << " attacks with their " <<  this->_weapon.getType() << std::endl;
}