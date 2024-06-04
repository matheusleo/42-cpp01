/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:28:35 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 08:53:32 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <Weapon.hpp>
#include <iostream>

class HumanB
{
private:
    Weapon *weapon;
    std::string name;

public:
    HumanB(std::string name);
    ~HumanB(void);

    void setWeapon(Weapon &weapon);
    void attack(void) const;
};

#endif