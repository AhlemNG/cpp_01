/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:58:39 by anouri            #+#    #+#             */
/*   Updated: 2023/12/28 14:35:12 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

bool isValidLevel(std::string level)
{
    if (!level.compare("debug") || !level.compare("info") || !level.compare("warning") || !level.compare("error"))
        return true;
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
}