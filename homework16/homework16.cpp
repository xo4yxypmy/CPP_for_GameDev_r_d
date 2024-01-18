#include <iostream>
#include "class_Rectangle.h"
#include "class_Player.h"
#include "class_Team.h"

int main()
{

	Rectangle rect1;
	std::cout << "Rectangle 1: Area = " << rect1.getArea() << ", Perimeter = " << rect1.getPerimeter() << std::endl;

	Rectangle rect2(5.0f, 7.0f);
	std::cout << "Rectangle 2: Area = " << rect2.getArea() << ", Perimeter = " << rect2.getPerimeter() << std::endl;

	std::cout << std::endl << std::endl;

	Weapon pistol("Desert Eagle", 30, 300);
	Weapon sniperRifle("AWP", 100, 1500);
	Weapon rifle("M4", 60, 500);

	Player player1("xXx_NAGIBATOR_xXx", 150, PlayerClass::Assault);
	Player player2("S1mple", 140, PlayerClass::Sniper);
	Player player3("MyXa_B_KeDaX", 160, PlayerClass::Medic);
	Player player4("SHREK", 130, PlayerClass::Support);


	player1.setWeapon(&pistol);
	player2.setWeapon(&sniperRifle);
	player3.setWeapon(&rifle);
	player4.setWeapon(&rifle);

	std::cout << player1.getName() << " (" << player1.getHealth() << " HP, "
			  << "Class: " << player1.getPlayerClass() << ") is equipped with "
			  << player1.getWeapon()->getName() << " (Damage: " << player1.getWeapon()->getDamage()
			  << ", Range: " << player1.getWeapon()->getRange() << ")" << std::endl;
	
	std::cout << player2.getName() << " (" << player2.getHealth() << " HP, "
			  << "Class: " << player2.getPlayerClass() << ") is equipped with "
			  << player2.getWeapon()->getName() << " (Damage: " << player2.getWeapon()->getDamage()
			  << ", Range: " << player2.getWeapon()->getRange() << ")" << std::endl;

	std::cout << std::endl << std::endl;

	Team team1("Team A");
	Team team2("Team B");

	team1.addPlayer(&player1);
	team1.addPlayer(&player2);
	team2.addPlayer(&player3);
	team2.addPlayer(&player4);

	team1.printTeamInfo();
	team2.printTeamInfo();

	std::cout << std::endl << std::endl;

	team1.removePlayer(&player1);
	team2.removePlayer(&player4);

	team1.printTeamInfo();
	team2.printTeamInfo();

	return 0;
}