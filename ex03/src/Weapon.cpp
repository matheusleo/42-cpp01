/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:33:59 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 08:47:26 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>
#include <iostream>

Weapon::Weapon(void)
{
    std::cout << "Weapon was created" << std::endl;
}

Weapon::Weapon(std::string type) : type(type)
{
    std::cout << "Weapon " << this->type << " was created" << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon " << this->type << " was destroyed" << std::endl;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

std::string Weapon::getType() const
{
    return this->type;
}