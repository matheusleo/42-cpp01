/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:19:01 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 08:39:50 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
private:
    std::string type;

public:
    Weapon();
    Weapon(std::string type);
    ~Weapon(void);

    void setType(std::string type);
    std::string getType() const;
};

#endif