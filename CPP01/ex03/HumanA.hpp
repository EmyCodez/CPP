/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:34:10 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/02 13:36:53 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
  private:
	std::string _name;
	Weapon &_weapon;
	
  public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	//member function
	void attack(void);
};

#endif
