/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:05:59 by aatki             #+#    #+#             */
/*   Updated: 2023/11/04 06:36:10 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_first(std::string str)
{
        if(!str.empty())
                first_name = str;
}

void Contact::set_last(std::string str)
{
        if(!str.empty())
                last_name = str;
}

void Contact::set_nickname(std::string str)
{
        if(!str.empty())
                nickname = str;
}

void Contact::set_secret(std::string str)
{
        if(!str.empty())
                darkest_secret = str;
}

void Contact::set_number(std::string str)
{
        if(!str.empty())
                number = str;
}

std::string Contact::get_first()
{
        return first_name;
}

std::string Contact::get_last()
{
        return last_name;
}

std::string Contact::get_nickname()
{
        return nickname;
}

std::string Contact::get_secret()
{
        return darkest_secret;
}

std::string Contact::get_number()
{
        return number;
}


