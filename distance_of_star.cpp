#include <iostream>

int main() {
    // speed of light in km/s
    const double speed_of_light = 299792.458; // km/s
    // distance in light years
    const double sun_distance = 149 * 10^6; // km

    // distance in km
    std::cout << "Distance from the sun to the earth: " << sun_distance << " km" << std::endl;
    // distance in light years
    std::cout << "Distance from the sun to the earth: " << sun_distance / speed_of_light << " light years" << std::endl;



    return 0;
}