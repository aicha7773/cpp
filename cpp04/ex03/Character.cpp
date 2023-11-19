/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:32:10 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 09:31:06 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout<<"the Character Default constractor\n";
    idx = 0;
    pi = 0;
    Name = "default";
    *slot = NULL;
    PtrSaver = NULL;
}

Character::Character(std::string const & Name)
{
    std::cout<<"the Character Default constractor\n";
    idx = 0;
    pi = 0;
    this->Name = Name;
    *slot = NULL;
    PtrSaver = NULL;
}

Character::Character(Character const &src)
{
    std::cout<<"the Character copy constractor\n";
    if (this != &src)
    {
        this->idx = src.idx;
        this->pi = src.pi;
        this->Name = src.Name;
        for (int i=0;i <= idx ;i++)
        {
            delete slot[i];
            if (src.slot[i]->getType() == "Cure")
                slot[idx] = new Cure;
            else
                slot[idx] = new Ice;
        }
        delete (this->PtrSaver);
        AMateria **PtrSaver = new AMateria[pi + 1];
        for (int i=0;i <= idx ;i++)
        {
            if (src.slot[i]->getType() == "Cure")
                PtrSaver[idx] = new Cure;
            else
                PtrSaver[idx] = new Ice;
        }
    }
}

Character const &Character::operator =(Character const &src)
{
    std::cout<<"the Character assiment operator\n";
    if (this != &src)
    {
        this->idx = src.idx;
        this->pi = src.pi;
        this->Name = src.Name;
        for (int i=0;i <= idx ;i++)
        {
            delete slot[i];
            if (src.slot[i]->getType() == "Cure")
                slot[idx] = new Cure;
            else
                slot[idx] = new Ice;
        }
        delete (this->PtrSaver);
        AMateria *PtrSaver = new[pi + 1];
        for (int i=0;i <= idx ;i++)
        {
            if (src.slot[i]->getType() == "Cure")
                PtrSaver[idx] = new Cure;
            else
                PtrSaver[idx] = new Ice;
        }
    }
    return *this;
}

Character::~Character()
{
    std::cout<<"the Character Default destractor\n";
    if (*slot)
        delete[] slot;
    if (PtrSaver)
        delete[] PtrSaver;
}

std::string const & Character::getName() const
{
    return Name;
}

void Character::equip(AMateria* m)
{
    slot[idx] = m;
    idx ++;
}

void Character::unequip(int indx)
{
    if (!idx)
        return ;
    for (int i=0;i <= idx ;i++)
        slot[indx + i] = slot [indx + i + 1];
    int i = 0;
    AMateria *tmp = new Ice[pi + 2];
    if (pi)
    {
        for (i=0;i < pi ;i++)
            tmp = PtrSaver[i];
        delete[] PtrSaver;
    }
    tmp [i] = *slot[indx];
    PtrSaver = &tmp;
    pi ++;
    idx --;
}

void Character::use(int indx, Character& target)
{
    // if(slot[indx].type == "ice")
    slot[indx]->use(target);
}
