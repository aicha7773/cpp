/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 06:56:03 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 09:27:31 by aatki            ###   ########.fr       */
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
        AMateria *slot[4];
    public:
        AMateria **PtrSaver;
        int pi;
        int idx;
        Character();
        Character(std::string const & Name);
        Character(Character const &src);
        Character const & operator=(Character const &src);
        ~Character();
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int indx, ICharacter& target);
};
