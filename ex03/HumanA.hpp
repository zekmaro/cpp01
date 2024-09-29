/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:55:31 by anarama           #+#    #+#             */
/*   Updated: 2024/09/29 19:39:20 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	private:
		Weapon &_weapon;
		std::string _name;
		HumanA( void );
	
	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );

		void	attack( void );
		void	setWeapon( Weapon &weapon );
};

#endif // HUMANA_HPP