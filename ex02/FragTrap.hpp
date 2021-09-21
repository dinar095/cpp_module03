//
// Created by dinar on 20.09.2021.
//

#ifndef CPP_MODULE03_FRAGTRAP_H
#define CPP_MODULE03_FRAGTRAP_H
#pragma once
#include "ClapTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;


class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(string str);
	~FragTrap();
	FlagTrap& operator=(const FragTrap &src);
	FlagTrap(const FlagTrap& src);
};


#endif //CPP_MODULE03_FRAGTRAP_H
