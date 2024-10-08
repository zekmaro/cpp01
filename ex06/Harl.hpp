/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:45:12 by anarama           #+#    #+#             */
/*   Updated: 2024/10/04 11:01:48 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>


class Harl {
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void (Harl::*_ptr_arr[4])(void);

	public:
		Harl( void );
		~Harl( void );
		void complain( std::string level );
};