#pragma once

#include <string>

class Pokemon
{
public:
	Pokemon(std::string name, float hp = 10, float mp = 10, float attack = 1, float defense = 0, float attack_speed = 0);

	// 输出神奇宝贝的信息
	void ShowInfo(); // Info = Information(信息)

private:
	std::string name_;
	float hp_, hp_max_;
	float mp_, mp_max_;
	float attack_;
	float defense_;
	float attack_speed_;
};