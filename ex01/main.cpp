/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:49:18 by anouri            #+#    #+#             */
/*   Updated: 2024/01/02 13:00:08 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
    std::cout << std::endl << std::endl;
    Zombie *zombiehorde = zombieHorde(5, "ghoul");   
    
    for (int i = 0; i < 5; i++)
        zombiehorde[i].announce();
    std::cout << std::endl << std::endl;
    delete[] zombiehorde;
    std::cout << std::endl << std::endl;
    return 0;
}

