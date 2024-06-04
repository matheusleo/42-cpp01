/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:23:26 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/04 14:17:40 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return 1;
    }

    Harl harl = Harl();
    harl.complain(argv[1]);
    return 0;
}