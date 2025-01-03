/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esimpson <esimpson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:31:34 by esimpson          #+#    #+#             */
/*   Updated: 2025/01/03 12:43:40 by esimpson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
  private:
	std::string _type;

  public:
	Weapon();
	Weapon(std::string _type);
	~Weapon();

	//member functions
	const std::string &getType(void) const;
	void setType(std::string newType);
};

#endif
