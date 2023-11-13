/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:48:55 by mgruson           #+#    #+#             */
/*   Updated: 2023/05/24 16:09:13 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[])
{
    if (argc != 2)
		std::cout << "Invalid Number of arguments" << std::endl;
	else
	{
		try
		{
			RPN rpn;
			rpn.processInput(argv[1]);
			if (rpn.getNUmbers().size() == 1)
				std::cout << "The result: " << rpn.getNUmbers().front() << std::endl;
			else
				std::cout << "Error" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
		
	}
}

/*
1 + (3 * 4) => 1 3 4 * +

1 + (3 * 4) * 5 => 1 3 4 * + 5 *

1 + (3 * 4) * (5 * 6) =>1 3 4 * + 5 6 * *

*/