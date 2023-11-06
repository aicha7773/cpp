/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 07:51:53 by aatki             #+#    #+#             */
/*   Updated: 2023/11/04 06:23:29 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Contact{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;
        std::string number;
    public:
        void set_first(std::string str);
        void set_last(std::string str);
        void set_nickname(std::string str);
        void set_secret(std::string str);
        void set_number(std::string str);
        std::string get_first();
        std::string get_last();
        std::string get_nickname();
        std::string get_secret();
        std::string get_number();
};
