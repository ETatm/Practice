#include "pokemon.h"
#include <iostream>
using namespace std;

Pokemon::Pokemon(std::string name, float hp, float mp, float attack, float defense, float attack_speed)
	:name_(name), hp_(hp), hp_max_(hp), mp_(mp), mp_max_(mp), attack_(attack), defense_(defense), attack_speed_(attack_speed)
{
}

void Pokemon::ShowInfo()
{
	cout << "姓名：" << name_ << endl
		<< "血量：" << hp_ << "/" << hp_max_ << "\t" << "能量：" << mp_ << "/" << mp_max_ << endl
		<< "攻击：" << attack_ << "\t" << "护甲：" << defense_ << endl
		<< "攻速；" << attack_speed_ << endl;
}