#include <iostream>
#include <cstdlib> // для system
#include <random>
#include <vector>
using namespace std;

class dat
{
public:
string name;
string measure_unit;
double min_measure_range, max_measure_range;
virtual double measure()
{
return 0;
}
};

class GPS_System{
public:
string name;
vector <dat*> vec;
void add_sensor(dat* obj)
{
vec.push_back(obj);
}
void measure_acc()
{
for(int i = 0; i < vec.size(); ++i)
{
if(vec[i]->measure_unit == "g")
{
cout «"Acceleration = " « vec[i]->measure() « " g" « endl;
}
}
}
