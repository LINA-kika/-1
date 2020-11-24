#pragma once
#include "pokemon.hpp"

class Pikachu : public Pokemon
{
    private:
            int p_electric;
            int p_field;
    public:
            Pikachu();
            Pikachu(std::string l_name, int l_electric, int l_field):Pokemon(l_name)
            {
                p_electric = l_electric;
                p_field = l_field;
            };
            Pikachu(std::string l_name, int l_hp, int l_attack, int l_defense, int l_speed, int l_electric, int l_field):Pokemon(l_name, l_hp, l_attack, l_defense, l_speed)
            {
                p_electric = l_electric;
                p_field = l_field;
            };
            void set_pikachu_power(int l_electric);
            void set_pikachu_defense(int l_field);
            int get_pikachu_power() {return p_electric;};
            int get_pikachu_defence() {return p_field;};

            void print()
            {
                std::cout << get_pikachu_power()<< std::endl;
                 std::cout << get_pikachu_defence()<< std::endl;
            };

};
class Lila : public Pokemon
{
     private:
            int p_fire;
            int p_wall;
    public:
            Lila();
            Lila(std::string l_name, int l_fire, int l_wall):Pokemon(l_name)
            {
                p_fire = l_fire;
                p_wall = l_wall;
            };
            Lila(std::string l_name, int l_hp, int l_attack, int l_defense, int l_speed, int l_fire, int l_wall):Pokemon(l_name, l_hp, l_attack, l_defense, l_speed)
            {
                p_fire = l_fire;
                p_wall = l_wall;
            };
            void set_lila_power(int l_fire);
            void set_lila_defense(int l_wall);
            int get_lila_power() {return p_fire;};
            int get_lila_defence() {return p_wall;};
            void print()
            {
                std::cout << get_lila_power()<< std::endl;
                 std::cout << get_lila_defence()<< std::endl;
            };


};
class Nija : public Pokemon
{
     private:
            int p_wind;
            int p_healing;
    public:
            Nija();
            Nija(std::string l_name, int l_wind, int l_healing):Pokemon(l_name)
            {
                p_wind = l_wind;
                p_healing = l_healing;
            };
            Nija(std::string l_name, int l_hp, int l_attack, int l_defense, int l_speed, int l_wind, int l_healing):Pokemon(l_name, l_hp, l_attack, l_defense, l_speed)
            {
                p_wind = l_wind;
                p_healing = l_healing;
            };
            void set_nija_power(int l_wind);
            void set_nija_defense(int l_healing);
            int get_nija_power() {return p_wind;};
            int get_nija_defence() {return p_healing;};
            void print()
            {
                std::cout << get_nija_power()<< std::endl;
                std::cout << get_nija_defence()<< std::endl;
            };


};
