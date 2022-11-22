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
//////////////////////датчики///////////////////////////////////////////////
class Acceleration: public dat
{
    public:    
    Acceleration():dat()
    {
        measure_unit = "g";//единица измерения g-перегрузка
        min_measure_range = 0.0;
        max_measure_range = 500.0;
    }
    double measure()
    {
       
        std::random_device rd;
        std::mt19937 e2(rd());
        std::uniform_real_distribution<> dist(min_measure_range, max_measure_range);
        return dist(e2);
    }
};

class Gyroscop: public dat
{
    public:
    Gyroscop():dat()
    {
        measure_unit = "gradus";
        min_measure_range = 0;
        max_measure_range = 90;
    }
    double measure()
    {
        std::random_device rd;
        std::mt19937 e2(rd());
        std::uniform_real_distribution<> dist(min_measure_range, max_measure_range);
        return dist(e2);
    }

};

class Position: public dat
{
    public:
    Position():dat()
    {
        measure_unit = "km";
        min_measure_range = 0; 
        max_measure_range = 1000;
    }
    double measure()
    {
        std::random_device rd;
        std::mt19937 e2(rd());
        std::uniform_real_distribution<> dist(min_measure_range, max_measure_range);
        return dist(e2);
    }
};