/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:58:59 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/25 15:34:20 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
#include <exception>

template <typename T>
class Array {
 private:
	T*				_array;
	unsigned int	_len;
 public:
	Array(void);
	Array(unsigned int n);
	Array(const Array& obj);
	Array& operator=(const Array& obj);
	~Array(void);
	unsigned int size(void) const;
	T& operator[] (unsigned int i) const;
};

# include "Array.tpp"

#endif