#pragma once
#include <string>
#include "class_Team.h"

enum PlayerClass
{
	Assault,
	Support,
	Sniper,
	Medic
};

class Weapon {
public:
	Weapon(const std::string& name, int damage, int range) :
		name(name), damage(damage), range(range){}

	std::string getName() const { return name; }
	int getDamage() const { return damage; }
	int getRange() const { return range; }

private:
	std::string name;
	int damage;
	int range;
};

class Player {
public:
	Player(const std::string& name, int health, PlayerClass playerClass) : 
		name(name), health(health), playerClass(playerClass), weapon(nullptr), team(nullptr){}

	std::string getName() const { return name; }
	int getHealth() const { return health; }
	PlayerClass getPlayerClass() const { return playerClass; }
	
	void setWeapon(Weapon* weapon);

	Weapon* getWeapon() const;

	void printPlayerInfo() const;

	void setTeam(class Team* team);

private:
	std::string name;
	int health;
	PlayerClass playerClass;
	Weapon* weapon;
	class Team* team;
};