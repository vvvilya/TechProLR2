#include <iostream>
#include <string.h>
#include <cstdlib> // для system
using namespace std;


class GPS_System{
public:
std::string name;
void add_sensor();
float measure_acc();
float measure_gyro();
float measure_position();
float measure_sensors();
void list_sensors();
};