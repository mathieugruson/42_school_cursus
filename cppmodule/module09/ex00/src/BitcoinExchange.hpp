/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:35:05 by mgruson           #+#    #+#             */
/*   Updated: 2023/05/24 12:32:31 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <cstdlib>
#include <sstream>

class BitcoinExchange
{
    private:
        std::map<std::string, double> btc;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& btc);
        BitcoinExchange& operator=(const BitcoinExchange& btc);
        ~BitcoinExchange();
        std::map<std::string, double> getBtc() const;
        double	matchDate(std::string date);
};
#endif