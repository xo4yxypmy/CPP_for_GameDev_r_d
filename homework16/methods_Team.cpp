#include <iostream>
#include "class_Team.h"
#include "class_Player.h"

bool Team::addPlayer(Player* player) {
	for (Player* p : players) {
		if (p == player) {
			return false;
		}
	}
	
	if (numPlayers < MAX_PLAYERS) {
		players.push_back(player);
		player->setTeam(this);
		numPlayers++;
		return true;
	}

	return false;
}

bool Team::removePlayer(Player* player) {
	for (auto it = players.begin(); it != players.end(); ++it) {
		if (*it == player) {
			players.erase(it);
			player->setTeam(nullptr);
			numPlayers--;
			return true;
		}
	}
	
	return false;
}

void Team::printTeamInfo() const {
	std::cout << "Team: " << name << ", Number of Players: " << numPlayers << "\n";
	for (const auto& player : players) {
		player->printPlayerInfo();
	}
}