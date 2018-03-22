#pragma once

#include <string>

class Pokemon
{
public:
	Pokemon(std::string name, float hp = 10, float mp = 10, float attack = 1, float defense = 0, float attack_speed = 0);

	// ������汦������Ϣ
	void ShowInfo(); // Info = Information(��Ϣ)

private:
	std::string name_;
	float hp_, hp_max_;
	float mp_, mp_max_;
	float attack_;
	float defense_;
	float attack_speed_;
};