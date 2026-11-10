#include <iostream>
#include <string>

void Charge(int battery)
{
battery += 10;
std::cout << "Charging..." << battery << '\n';

}
void chargeByReference

int main()
{
int rudik{10};
int scout{40};
Charge(rudik);
std::cout << "Scout after reference charge :" <<  scout << "%\n";
std::cout << "Rover charge :" <<  rudik << "%\n";
return 0;
}
