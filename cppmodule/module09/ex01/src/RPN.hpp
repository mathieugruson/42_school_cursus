/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:51:50 by mgruson           #+#    #+#             */
/*   Updated: 2023/05/24 16:07:18 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <list>
#include <algorithm>

class RPN
{
    private:
    	std::list<int> _numbers;
    public:
        RPN();
        RPN(const RPN& rpn);
        RPN& operator=(const RPN& rpn);
        ~RPN();

        std::list<int> getNUmbers() const;
        void    processInput(std::string expression);
       int      calculate(int operand1, int operand2, char c);
        bool    isOperator(char c);
};