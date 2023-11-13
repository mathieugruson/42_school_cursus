/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:56:45 by mgruson           #+#    #+#             */
/*   Updated: 2023/05/24 17:45:29 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Error" << std::endl;
        return (EXIT_FAILURE);
    }
    try
    {
        PmergeMe merge_insert;
		merge_insert.startProgram(argc, argv);
		
    }
    catch(const std::exception& e)
    {
        std::cout << "Error" << std::endl;
    }
    return (0);
}

/* https://iq.opengenus.org/merge-insertion-sort/ */
