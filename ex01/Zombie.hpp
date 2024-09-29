/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:10:44 by anarama           #+#    #+#             */
/*   Updated: 2024/09/29 19:30:30 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

# define DEFAULT_NAME "name"

class Zombie {
	private:
		std::string _name;
	
	public:
		Zombie( void );
		Zombie( std::string name) ;
		~Zombie( void );

		void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif // ZOMBIE_HPP