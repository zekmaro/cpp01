/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:56:41 by anarama           #+#    #+#             */
/*   Updated: 2024/09/29 19:38:51 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
	private:
		std::string _type;

	public:
		Weapon( void );
		Weapon( const std::string &type);
		~Weapon( void );
		
		const std::string &getType() const;
		void setType(const std::string &newType);
};

#endif // WEAPON_HPP