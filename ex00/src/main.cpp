/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:31:35 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/03 23:41:32 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie *newZombie(std::string name)
{
    return new Zombie(name);
}

void randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.annouce();
}

int main(void)
{
    Zombie *zombie = newZombie("Zombie created on heap");
    randomChump("Zombie created on stack");
    zombie->annouce();
    delete zombie;
}