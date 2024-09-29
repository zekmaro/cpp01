/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:42:09 by anarama           #+#    #+#             */
/*   Updated: 2024/09/29 16:12:01 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

# define DEFAULT_NAME "name";

class Zombie {
	private:
		std::string _name;
	
	public:
		Zombie( void );
		Zombie( std::string name) ;
		~Zombie( void );

		void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif // ZOMBIE_HPP