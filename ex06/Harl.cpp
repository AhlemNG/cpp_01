/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:04:21 by anouri            #+#    #+#             */
/*   Updated: 2024/01/02 12:36:48 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(/* args */)
{
    // std::cout << "Harl constructor called" << std::endl;
}

Harl::~Harl()
{
    // std::cout << "Harl destructor called" << std::endl;
}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn/’t put enough bacon in my burger! If you did, I wouldn/’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I (think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;   
}

void Harl::complain( std::string level)
{
    void (Harl::*PointerToFunction[4])() = {&Harl::debug, &Harl::info, &Harl::warning,&Harl::error};
    
    switch (level[0])
    {
        case 'D':
            for (int i = 0; i < 4; i++)
                (this->*PointerToFunction[i])(); 
            break;
        case 'I':
             for (int i = 1; i < 4; i++)
                (this->*PointerToFunction[i])(); 
            break;
        case 'W':
            for (int i = 2; i < 4; i++)
                (this->*PointerToFunction[i])(); 
            break;
        case 'E':
            (this->*PointerToFunction[3])();
            break;
        default:
            break;
    }
}
