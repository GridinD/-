#include <iostream>
#include <string>

class Software
{
public:
    std::string trademark;
    std::string manufacturer;
    std::string latestversion;

    void Set_Trademark(std::string trademarkname)
    {
        trademark = trademarkname;
    }
    std::string Get_Trademark()
    {
        return trademark;
    }

    void Set_Manufacturer(std::string manufacturername)
    {
        manufacturer = manufacturername;
    }
    std::string Get_Manufacturer()
    {
        return manufacturer;
    }

    void Set_LastestVersion(std::string latestversionnumber)
    {
        latestversion = latestversionnumber;
    }
    std::string Get_LatestVersion()
    {
        return latestversion;
    }
};

int main()
{
    Software DevelopmentEnvironment;

    std::string trademark;
    std::string manufacturer;
    std::string latestversion;

    std::cout << "Enter trade mark: ";
    getline(std::cin, trademark);

    std::cout << "Enter manufacturer: ";
    getline(std::cin, manufacturer);

    std::cout << "Enter last version number: ";
    getline(std::cin, latestversion);

    DevelopmentEnvironment.Set_Trademark(trademark);
    DevelopmentEnvironment.Set_Manufacturer(manufacturer);
    DevelopmentEnvironment.Set_LastestVersion(latestversion);

    std::cout << "Trade Mark: " << DevelopmentEnvironment.Get_Trademark() << std::endl;
    std::cout << "Manufacturer" << DevelopmentEnvironment.Get_Manufacturer() << std::endl;
    std::cout << "Latest version: " << DevelopmentEnvironment.Get_LatestVersion() << std::endl;
}