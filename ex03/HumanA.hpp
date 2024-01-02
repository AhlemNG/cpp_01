/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 09:49:39 by anouri            #+#    #+#             */
/*   Updated: 2024/01/02 13:16:45 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon& _weapon;
    public:
        // HumanA(/* args */);
        HumanA(std::string const &name, Weapon &weapon); /*HumanA will alwaysbe armed => static*/
        ~HumanA();
        void attack();
};

#endif

/*reference => create an alias of an existing variable*/
/*in memory, a reference contains the address of the variable*/


/*use a 
    reference to a Weapon? 
        * A reference must be initialized from the beginning
        * Once initialized, it can't be changed
        * dereferened implicitly
    or
    a pointer to Weapon?
        * it is best practice to initialize a pointer
        * it can be changed to point to another variable...
        * dereferencing is manual and explicit
*/
