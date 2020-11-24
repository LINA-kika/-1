#include <iostream>
#include <fstream>

#include "other.hpp"

int main ()
{
    Pikachu first("FIRST", 2, 2);
    first.set_p_attack(2);
    first.set_p_defense(2);
    first.set_p_hp(2);
    first.set_p_speed(2);
    first.p_print();
    first.print();
    Lila second ("Second", 1, 1, 1, 1, 1, 1);
    second.set_p_attack(1);
    second.set_p_defense(1);
    second.set_p_hp(1);
    second.set_p_speed(1);
    second.p_print();
    second.print();
    Nija third;
    third.set_nija_power(5);
    third.set_nija_defense(5);
    third.p_print();
    third.print();
    std::ofstream myfile;
    myfile.open ("file.txt", std::ios::trunc);
    if(myfile.is_open())
    {
        myfile << "{" << std::endl;
        myfile << "\t\"pokemons\": [" << std::endl;
        myfile << "\t\t{" << std::endl;
        myfile << "\t\t\t\"name\": " << first.get_p_name()<< std::endl;
        myfile << "\t\t\t\"hp\": " << first.get_p_hp()<< std::endl;
        myfile << "\t\t\t\"attack\": " << first.get_p_attack()<< std::endl;
        myfile << "\t\t\t\"defense\": " << first.get_p_defense()<< std::endl;
        myfile << "\t\t\t\"speed\": " << first.get_p_speed()<< std::endl;
        myfile << "\t\t\t\"power\": " << first.get_pikachu_power()<< std::endl;
        myfile << "\t\t\t\"defence\": " << first.get_pikachu_defence()<< std::endl;
        myfile << "\t\t},"<< std::endl;
        myfile << "\t\t{" << std::endl;
        myfile << "\t\t\t\"name\": " << second.get_p_name()<< std::endl;
        myfile << "\t\t\t\"hp\": " << second.get_p_hp()<< std::endl;
        myfile << "\t\t\t\"attack\": " << second.get_p_attack()<< std::endl;
        myfile << "\t\t\t\"defense\": " << second.get_p_defense()<< std::endl;
        myfile << "\t\t\t\"speed\": " << second.get_p_speed()<< std::endl;
        myfile << "\t\t\t\"power\": " << second.get_lila_power()<< std::endl;
        myfile << "\t\t\t\"defence\": " << second.get_lila_defence()<< std::endl;
        myfile << "\t\t},"<< std::endl;
        myfile << "\t\t{" << std::endl;
        myfile << "\t\t\t\"name\": " << third.get_p_name()<< std::endl;
        myfile << "\t\t\t\"hp\": " << third.get_p_hp()<< std::endl;
        myfile << "\t\t\t\"attack\": " << third.get_p_attack()<< std::endl;
        myfile << "\t\t\t\"defense\": " << third.get_p_defense()<< std::endl;
        myfile << "\t\t\t\"speed\": " << third.get_p_speed()<< std::endl;
        myfile << "\t\t\t\"power\": " << third.get_nija_power()<< std::endl;
        myfile << "\t\t\t\"defence\": " << third.get_nija_defence()<< std::endl;
        myfile << "\t\t}"<< std::endl;
        myfile << "\t]"<< std::endl;
        myfile << "}"<< std::endl;
        myfile.close();
    }
    else std::cout << "can not open the file" << std::endl;
    return 0;
}