/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 06:56:03 by aatki             #+#    #+#             */
/*   Updated: 2023/11/21 10:24:12 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class Character : public ICharacter
{
    private:
        std::string Name;
    public:
        AMateria *slot[4];
        AMateria **PtrSaver;
        int pi;
        int idx;
        Character();
        Character(std::string const & Name);
        Character(const Character  &src);
        Character const & operator=(const Character &src);
        ~Character();
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        void use(int indx, ICharacter& target);
};
