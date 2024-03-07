#pragma once
#include <string>

class Player
{
private:
	std::string name;
	int points;
public:
	void Set(std::string name, int points);
	static int ComparePoints(const Player* first, const Player* second);
	static int ComparePoints(const void* first, const void* second);
	void Print();
};
