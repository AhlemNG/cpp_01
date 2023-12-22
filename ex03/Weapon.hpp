/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:18:42 by anouri            #+#    #+#             */
/*   Updated: 2023/12/22 17:40:24 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon(/* args */);
        Weapon(std::string type);
        ~Weapon();
        const std::string& getType();
        void setType(std::string type);
};

#endif
