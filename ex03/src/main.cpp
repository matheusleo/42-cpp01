/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:33:15 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 08:55:22 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>
#include <HumanB.hpp>
#include <Weapon.hpp>

int main()
{
    {
        Weapon bigSword = Weapon("big sword");
        HumanA bob("Bob", bigSword);
        bob.attack();
        bigSword.setType("small dagger");
        bob.attack();
    }
    {
        std::cout << std::endl;
    }
    {
        Weapon smallSword = Weapon("small sword");
        HumanB jim("Jim");
        jim.setWeapon(smallSword);
        jim.attack();
        smallSword.setType("big dagger");
        jim.attack();
    }
    return 0;
}