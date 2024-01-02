/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 10:02:00 by anouri            #+#    #+#             */
/*   Updated: 2023/12/28 12:02:48 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
class Harl
{
    private:
        /* data */
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Harl(/* args */);
        ~Harl();
        void complain( std::string level);
};



#endif