/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:28:30 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 08:53:46 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>
#include <Weapon.hpp>

HumanB::HumanB(std::string name) : name(name)
{
}

HumanB::~HumanB(void)
{
    std::cout << "HumanB " << this->name << " is dead" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void) const
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}