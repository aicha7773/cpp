/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:32:10 by aatki             #+#    #+#             */
/*   Updated: 2023/11/25 11:44:32 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void ftDelete(AMateria **tmp, int pip)
{
    if (pip)
    {
        for (int i = 0; i < pip; i++)
            delete tmp[i];
    }
}

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
        this->Name = src.Name;
        this->pi = idx;
        this->PtrSaver = new AMateria*[idx];
        for (int i=0;i < idx ;i++)
        {
            slot[i] = src.slot[i]->clone();
            PtrSaver[i] = slot[i];
        }
    }
}

Character const & Character::operator =(Character const &src)
{
    std::cout<<"the Character assiment operator\n";
    if (this != &src)
    {
        this->idx = src.idx;
        this->Name = src.Name;
        ftDelete(this->PtrSaver,pi);
        this->pi = idx;
        this->PtrSaver = new AMateria*[idx];
        for (int i=0;i < idx ;i++)
        {
            slot[i] = src.slot[i]->clone();
            PtrSaver[i] = slot[i];
        }
    }
    return *this;
}

Character::~Character()
{
    std::cout<<"the Character Default destractor \n";
    ftDelete(this->PtrSaver,pi);
    delete [] PtrSaver;
}

std::string const & Character::getName() const
{
    return Name;
}

void Character::equip(AMateria* m)
{
    if (!m)
        return;
    if (idx <= 4)
    {
        slot[idx] = m->clone();
        idx ++;
        int i = 0;
        AMateria **tmp = new AMateria *[pi + 1];
        if (pi)
        {
            for (i=0;i < pi ;i++)
                tmp[i] = PtrSaver[i];
        }
        delete []PtrSaver;
        tmp [i] = slot[idx-1];
        PtrSaver = tmp;
        pi ++;
    }
}

void Character::unequip(int indx)
{
    if (!idx || indx < 0 || indx > idx - 1) // to check
        return ;
    for (int i=0;i <= idx ;i++)
        slot[indx + i] = slot [indx + i + 1];
    idx --;
}

void Character::use(int indx, ICharacter& target)
{
    if (indx > idx - 1 || indx < 0)
    {
        std::cout<<"indice is too much\n";
        return ;
    }
    slot[indx]->use(target);
}
