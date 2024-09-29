/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:55:28 by anarama           #+#    #+#             */
/*   Updated: 2024/09/29 19:40:37 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

# define DEFAULT_WEAPON nullptr
# define DEFAULT_NAME "default"

class HumanB {
	private:
		Weapon *_weapon;
		std::string _name;
	
	public:
		HumanB( void );
		HumanB( std::string name );
		~HumanB( void );

		void	attack( void );
		void	setWeapon( Weapon *weapon );
};

#endif // HUMANB_HPP