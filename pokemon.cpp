#include <iostream>
#include "pokemon.hpp" 
Pokemon::Pokemon()
{
    p_name = "Example";
    p_hp = 50;
    p_attack = 50;
    p_defense = 50;
    p_speed = 50;
}
Pokemon::Pokemon(std::string l_name) 
{
    p_name =l_name;
}
Pokemon::Pokemon(std::string l_name, int l_hp)
{
    p_name = l_name;
    p_hp = l_hp;
}
Pokemon::Pokemon(std::string l_name, int l_hp, int l_attack)
{
    p_name = l_name;
    p_hp = l_hp;
    p_attack = l_attack;
}
Pokemon::Pokemon(std::string l_name, int l_hp, int l_attack, int l_defense)
{
    p_name = l_name;
    p_hp = l_hp;
    p_attack = l_attack;
    p_defense = l_defense;
}
Pokemon::Pokemon(std::string l_name, int l_hp, int l_attack, int l_defense, int l_speed)
{
    p_name = l_name;
    p_hp = l_hp;
    p_attack = l_attack;
    p_defense = l_defense;
    p_speed = l_speed;
}
void Pokemon::set_p_name(std::string l_name)
{
    p_name = l_name;
}
void Pokemon::set_p_hp(int l_hp)
{
    p_hp = l_hp;
}
void Pokemon::set_p_attack(int l_attack)
{
    p_attack = l_attack;
}
void Pokemon::set_p_defense(int l_defense)
{
    p_defense = l_defense;
}
void Pokemon::set_p_speed(int l_speed)
{
    p_speed = l_speed;
}
Pokemon::~Pokemon()
{
    
}