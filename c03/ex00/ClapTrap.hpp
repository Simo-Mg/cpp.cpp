/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:55:56 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/11 18:43:54 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ClapTrap {
    private : 
        std::string name;
        unsigned int hit_points;
        unsigned int energy_point ;
        unsigned int attack_damage ;
    public :
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &Clap);
        ClapTrap& operator= (const ClapTrap &target);
        ~ClapTrap();
        std::string GetName();
        void beRepaired(unsigned int amount);
        void takeDamage(unsigned int amount);
        void attack(const std::string& target);
        int  GetEnergy();
        int  Getattack();
        int  GetHit();
};