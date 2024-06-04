/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:39:31 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 14:17:34 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl
{
private:
    void debug(void) const;
    void info(void) const;
    void warning(void) const;
    void error(void) const;

public:
    Harl(void);
    ~Harl(void);

    void complain(std::string level);
};

#endif