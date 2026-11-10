#include <iostream>  
#include <chrono> 
#include <thread>
#include <string>

int main()
{
    const int minimumReserve{20};
    std::string deviceName;
    double battery = 0;      
    double consumption = 0;  

    std::cout << "Device name: ";
    std::getline(std::cin, deviceName);

    std::cout << "Battery (%): ";
    std::cin >> battery;

    std::cout << "Planned consumption (%): ";
    std::cin >> consumption;

    std::cout << "\n=== STARTING DISCHARGE SIMULATION (1 MINUTE) ===\n";
    
    double dischargePerSecond = consumption / 60.0; 

    for (int sec = 1; sec <= 60; ++sec) 
    {
        battery -= dischargePerSecond; 
        
        if (battery < 0) battery = 0; 

        printf("\rTime: %d/60s | Current Battery: %.1f%%", sec, battery);
        std::fflush(stdout); 

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "\nSimulation finished.\n\n";

    std::cout << "Device: " << deviceName << '\n';
    std::cout << "Reserve after task: " << (int)battery << "%\n";

    if (battery >= minimumReserve)
    {
        std::cout << "Status: ready \n";
    }
    else
    {
        std::cout << "Status: charging\n";
        std::cout << "\n=== STARTING CHARGE SIMULATION (10 SECONDS) ===\n";

        double chargePerSecond = (100.0 - battery) / 20.0;

        for (int sec = 1; sec <= 20; ++sec)
        {
            battery += chargePerSecond; 
            
            if (battery > 100) battery = 100; 

            printf("\rCharging: %d/10s | Current Battery: %.1f%%", sec, battery);
            std::fflush(stdout);

            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        std::cout << "\nDevice fully charged! Status: ready\n";
    }
    
    return 0;
}

