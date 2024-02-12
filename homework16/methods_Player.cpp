#include <iostream>
#include "class_Player.h"

void Player::setWeapon(Weapon* weapon) {
	this->weapon = weapon;
}

Weapon* Player::getWeapon() const {
	return weapon;
}

void Player::printPlayerInfo() const {
    std::cout << "Name: " << name << ", Health: " << health
        << ", Class: " << playerClass << ", Team: " << (team ? team->getName() : "None");

    if (weapon) {
        std::cout << ", Weapon: " << weapon->getName()
            << " (Damage: " << weapon->getDamage() << ", Range: " << weapon->getRange() << ")";
    }

    std::cout << std::endl;
}

void Player::setTeam(class Team* team) {
    this->team = team;
}