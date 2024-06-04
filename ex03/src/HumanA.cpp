/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:28:27 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 08:42:33 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA " << this->name << " is dead" << std::endl;
}

void HumanA::attack(void) const
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}