#include <iostream>
#include "Player.h"

int main()
{
	std::cout << "How many players?" << std::endl;
	
	int playersCount = 0;
	std::cin >> playersCount;

	Player* players = new Player[playersCount];

	for (int i = 0; i < playersCount; i++)
	{
		std::cout << "Enter player name and points:" << std::endl;
		std::string name;
		int points;
		std::cin >> name >> points;
		players[i].Set(name, points);
	}

	std::qsort(players, playersCount, sizeof(Player), Player::ComparePoints);
	std::cout << "Sorted players:" << std::endl;

	for (int i = 0; i < playersCount; i++)
	{
		players[i].Print();
	}
}
