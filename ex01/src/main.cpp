/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:31:35 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 00:12:57 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie *zombieHorde(int n, std::string name)
{
    Zombie *horde = new Zombie[n];
    for (int i = 0; i < n; i++)
        horde[i].setName(name);
    return horde;
}

int main(void)
{
    Zombie *horde = zombieHorde(5, "Hodor");
    for (int i = 0; i < 5; i++)
        horde[i].annouce();
    delete[] horde;
}
