#include "pokemon.h"
#include <iostream>
using namespace std;

Pokemon::Pokemon(std::string name, float hp, float mp, float attack, float defense, float attack_speed)
	:name_(name), hp_(hp), hp_max_(hp), mp_(mp), mp_max_(mp), attack_(attack), defense_(defense), attack_speed_(attack_speed)
{
}

void Pokemon::ShowInfo()
{
	cout << "������" << name_ << endl
		<< "Ѫ����" << hp_ << "/" << hp_max_ << "\t" << "������" << mp_ << "/" << mp_max_ << endl
		<< "������" << attack_ << "\t" << "���ף�" << defense_ << endl
		<< "���٣�" << attack_speed_ << endl;
}