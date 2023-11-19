/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:32:10 by aatki             #+#    #+#             */
/*   Updated: 2023/11/19 08:26:50 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout<<"the Character Default constractor\n";
    idx = 0;
    pi = 0;
    Name = "default";
    slot = NULL;
    PtrSaver = NULL;
}

Character(std::string const & Name)
{
    std::cout<<"the Character Default constractor\n";
    idx = 0;
    pi = 0;
    this->Name = Name;
    slot = NULL;
    PtrSaver = NULL;
}

Character::Character(Character const &src)
{
    std::cout<<"the Character copy constractor\n";
    if (this != &src)
    {
        this->idx = src->idx;
        this->pi = src->pi;
        this->Name = src->Name;
        for (int i=0;i <= idx ;i++)
        {
            delete slot[i];
            slot[idx] = new AMateria;
            slot[idx]->type  = src->type;
        }
        delete (this->PtrSaver);
        AMateria *PtrSaver = new[pi + 1];
        for (int i=0;i <= idx ;i++)
        {
            PtrSaver[idx] = new AMateria;
            PtrSaver[idx]->type  = src->type;
        }
    }
}

Character::Character const &operator =(Character const &src)
{
    std::cout<<"the Character assiment operator\n";
    if (this != &src)
    {
        this->idx = src->idx;
        this->pi = src->pi;
        this->Name = src->Name;
        for (int i=0;i <= idx ;i++)
        {
            delete slot[i];
            slot[idx] = new AMateria;
            slot[idx]->type  = src->type;
        }
        delete (this->PtrSaver);
        AMateria *PtrSaver = new[pi + 1];
        for (int i=0;i <= idx ;i++)
        {
            PtrSaver[idx] = new AMateria;
            PtrSaver[idx]->type  = src->type;
        }
    }
    return *this;
}

Character::~Character()
{
    std::cout<<"the Character Default destractor\n";
    if (slot)
        delete[] slot;
    if (PtrSaver)
        delete[] PtrSaver;
}

virtual std::string const & Character::getName()
{
    return Name;
}

virtual void Character::equip(AMateria* m)
{
    slot[idx] = m;
    idx ++;
}

virtual void Character::unequip(int indx)
{
    if (!idx)
        return ;
    for (int i=0;i <= idx ;i++)
        slot[indx + i] = slot [indx + i + 1];
    int i = 0;
    AMateria *tmp = new AMateria[pi + 2];
    if (pi)
    {
        for (i=0;i < pi ;i++)
            tmp = PtrSaver[i];
        delete[] PtrSaver;
    }
    tmp [i] = slot[indx];
    PtrSaver = tmp;
    pi ++;
    idx --;
}

virtual void Character::use(int idnx, Character& target)
{
    // if(slot[indx].type == "ice")
    slot[indx].use();
}
