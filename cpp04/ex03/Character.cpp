/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:32:10 by aatki             #+#    #+#             */
/*   Updated: 2023/11/20 08:37:53 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// AMateria **PtrSaveReset(AMateria **from,AMateria *add)
// {
// }

void ftDelete(AMateria **tmp, int pip)
{
    (void)tmp;
    std::cout<<"pip = "<<pip<<"\n";
    if (pip && tmp)
    {
        for (int i = 0; i < pip; ++i)
            delete tmp[i];
        delete[] tmp;
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
        this->pi = src.pi;
        for (int i=0;i < idx ;i++)
        {
            if (src.slot[i]->getType() == "cure")
                slot[i] = new Cure;
            else
                slot[i] = new Ice;
        }
        this->PtrSaver = new AMateria*[pi];
        for (int i=0;i < src.pi ;i++)
        {
            if (src.slot[i]->getType() == "cure")
                PtrSaver[idx] = new Cure;
            else
                PtrSaver[idx] = new Ice;
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
        for (int i=0;i < idx ;i++)
        {
            if (src.slot[i]->getType() == "cure")
                slot[idx] = new Cure();
            else
                slot[idx] = new Ice();
        }
        ftDelete(this->PtrSaver,pi);
        this->PtrSaver = new AMateria*[pi];
        for (int i=0;i < src.pi ;i++)
        {
            if (src.slot[i]->getType() == "cure")
                PtrSaver[idx] = new Cure();
            else
                PtrSaver[idx] = new Ice();
        }
        this->pi = src.pi;
    }
    return *this;
}

Character::~Character()
{
    std::cout<<"the Character Default destractor \n";
    ftDelete(this->PtrSaver,pi);
}

std::string const & Character::getName() const
{
    return Name;
}

void Character::equip(AMateria* m)
{
    std::cout<<"hello from equip "<<idx<<"\n";
    slot[idx] = m;
    idx ++;
    int i = 0;
    AMateria **tmp = new AMateria*[pi + 1];
    if (pi)
    {
        for (i=0;i < pi ;i++)
            tmp[i] = PtrSaver[i];
            delete []PtrSaver;
    }
    tmp [i] = m;
    PtrSaver = tmp;
    pi ++;
}

void Character::unequip(int indx)
{
    std::cout<<"hello from unequip\n";
    if (!idx)
        return ;
    for (int i=0;i <= idx ;i++)
        slot[indx + i] = slot [indx + i + 1];
    idx --;
}

void Character::use(int indx, ICharacter& target)
{
    if (indx > idx - 1)
    {
        std::cout<<"indice is too much\n";
        return ;
    }
    std::cout<<"hello from use in character \n";
    slot[indx]->use(target);
}
