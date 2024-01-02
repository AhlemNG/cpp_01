/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:27:18 by anouri            #+#    #+#             */
/*   Updated: 2024/01/02 13:10:18 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type): _type(type)
{    
    std::cout << "Weapon " << _type << " was created" << std::endl;
}
Weapon::~Weapon()
{
    std::cout << "Weapon " << _type << " was destructed" << std::endl;
}

const std::string& Weapon::getType()
{
    return _type;
}

void Weapon::setType(const std::string  type)
{
    _type = type;
}