/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:41:11 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 14:38:06 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::debug(void) const
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
                 "I really do!"
              << std::endl;
}

void Harl::info(void) const
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!"
                 "If you did, I wouldn’t be asking for more!"
              << std::endl;
}

void Harl::warning(void) const
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
                 "years whereas you started working here since last month."
              << std::endl;
}

void Harl::error(void) const
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*complainFunctions[4])(void) const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string complainLevels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (complainLevels[i] == level)
        {
            (this->*complainFunctions[i])();
            return;
        }
    }
    std::cout << "[ UNKOWN ]" << std::endl;
    std::cout << "Probably complaining about insignificant problems" << std::endl;
    return;
}