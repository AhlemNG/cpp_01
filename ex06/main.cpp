/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:58:39 by anouri            #+#    #+#             */
/*   Updated: 2024/01/02 12:38:15 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
bool isValidLevel(std::string level)
{
    if (std::isupper(level[0]))
    {
        for (char &c: level)
            c = std::tolower(c);
        if (!level.compare("debug") || !level.compare("info") || !level.compare("warning") || !level.compare("error"))
            return true;
    }
    std::cout << "invalid choice" << std::endl;
    return false;
}

int main(int argc, char *argv[])
{
    
    std::string level;
    if (argc == 2)
    {
        Harl harl;
        level = argv[1];
        if (isValidLevel(level))
            harl.complain(level);
    }
    return 0;
}