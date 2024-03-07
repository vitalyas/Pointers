#include "Player.h"
#include <iostream>

void Player::Set(std::string name, int points)
{
	this->name = name;
	this->points = points;
}

int Player::ComparePoints(const Player* first, const Player* second)
{
	if (first->points < second->points)
	{
		return -1;
	}

	if (first->points > second->points)
	{
		return 1;
	}

	return 0;
}

int Player::ComparePoints(const void* first, const void* second)
{
	return ComparePoints((Player*)(first), (Player*)second);
}

void Player::Print()
{
	std::cout << name << " " << points << std::endl;
}