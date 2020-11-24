#pragma once
#include <iostream>
class Pokemon
{
    private:
        std::string p_name;
        int p_hp;
        int p_attack;
        int p_defense;
        int p_speed;
    public:
        Pokemon();
        Pokemon(std::string l_name);
        Pokemon(std::string l_name, int l_hp);
        Pokemon(std::string l_name, int l_hp, int l_attack);
        Pokemon(std::string l_name, int l_hp, int l_attack, int l_defense);
        Pokemon(std::string l_name, int l_hp, int l_attack, int l_defense, int l_speed);
        ~Pokemon();
        void set_p_name(std::string l_name);
        void set_p_hp(int l_hp);
        void set_p_attack(int l_attack);
        void set_p_defense(int l_defense);
        void set_p_speed(int l_speed);
        std::string get_p_name() {return p_name;};
        int get_p_hp() {return p_hp;};
        int get_p_attack() {return p_attack;};
        int get_p_defense() {return p_defense;};
        int get_p_speed() {return p_speed;};
        
        void p_print ()
         {
             std::cout << get_p_name() << std::endl;
             std::cout << get_p_hp()<< std::endl;
             std::cout << get_p_attack()<< std::endl;
             std::cout << get_p_defense()<< std::endl;
            std::cout << get_p_speed()<< std::endl;
         };

};