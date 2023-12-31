/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:22:48 by anouri            #+#    #+#             */
/*   Updated: 2024/01/02 15:06:08 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()

{
    std::cout << "********************************************************" << std::endl;
    {
        Weapon club = Weapon("crude spiked club");
        std::cout << club.getType() << std::endl;
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    std::cout << "********************************************************" << std::endl;
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();    
    }
    std::cout << "********************************************************" << std::endl;
    {
        HumanB jim("Jim");
        jim.attack();
    }
    return 0;
}