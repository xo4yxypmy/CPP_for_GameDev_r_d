#pragma once
#include <string>
#include <vector>

const int MAX_PLAYERS = 10;

class Player;

class Team {
public:
	Team(const std::string& name) : name(name), numPlayers(0){}

	bool addPlayer(Player* player);
	bool removePlayer(Player* player);

	std::string getName() const { return name; }

	void printTeamInfo() const;
	
private:
	std::string name;
	int numPlayers;
	std::vector<Player*> players;
};