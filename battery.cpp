#include <iostream>
#include <string>

void chargeByCopy(int battery)
{ 
    battery += 10;
    std::cout << "copy inside function: " << battery << "%\n";
}

void chargeByReference(int& battery)
{ 
    battery += 10;
    std::cout << "reference inside function: " << battery << "%\n";
}

void printBattery(const std::string& name, const int & battery)
{ 
    std::cout << name << ": " << battery << "%\n"; 
}

void swapBatteries(int& left, int& right)
{
    const int saved{left};
    left = right;
    right = saved;
}

int main()
{
    int rover{70};
    int scout{40}; 

    printBattery("rover", rover);
    printBattery("scout", scout);

    chargeByCopy(rover); 
    printBattery("rover", rover);

    chargeByReference(rover);
    printBattery("rover", rover);

    swapBatteries(rover, scout);
    printBattery("rover", rover);
    printBattery("scout", scout);

    return 0;
}

