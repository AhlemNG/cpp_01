/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:41:17 by anouri            #+#    #+#             */
/*   Updated: 2023/12/26 15:45:47 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon *_weapon;
    public:
        HumanB(std::string name);
        HumanB(std::string const &name, Weapon &weapon);
        ~HumanB();
        void setWeapon(Weapon &club);
        void attack();
};

#endif
