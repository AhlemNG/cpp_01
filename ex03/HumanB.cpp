/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:43:25 by anouri            #+#    #+#             */
/*   Updated: 2024/01/02 15:06:48 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string const &name, Weapon &weapon): _name(name)
{
    if (!weapon.getType().empty())
        this->_weapon = &weapon;
    std::cout << _name << " was created" << std::endl;
}

HumanB::HumanB(std::string name): _name(name)
{
    _weapon = NULL;
    std::cout << _name << " was created" << std::endl;   
}
HumanB::~HumanB()
{
    std::cout << _name << " was destructed" << std::endl;
}

void HumanB::attack()
{
    if (this->_weapon != NULL)
        std::cout <<  _name << " attacks with their " <<  this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &club)
{
    this->_weapon = &club;
}