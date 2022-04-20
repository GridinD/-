#include <iostream>
#include <string>


class Manufacturing_company {
    public:
    std::string country;
    std::string equipment;
        void set_country(std::string country_name){
            country = country_name;
        }
        std::string get_country(){
            return country;
        }

        void set_equipment(std::string equipment_name){
            equipment = equipment_name;
        }
        std::string get_equipment(){
            return equipment;
        }
};

int main(){
    Manufacturing_company machines;

    std::string country;
    std::string equipment;

    std::cout << "Country: Россия";
    getline(std::cin, country);

    std::cout << "Eqiupmen: Станок";
    getline(std::cin, equipment);

    machines.set_country(country);
    machines.set_equipment(equipment);

    return 0;
}