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
                cout <<"Acceleration = " <<  vec[i]->measure() << " g" << endl;
            }
        }
    }
    
    void measure_gyro()
    {
       for (int j=0; j < vec.size(); j++)
       {
           if (vec[j]->measure_unit =="gradus")
           {
               cout <<"Angle = " << vec[j]->measure() << " gradus" << endl;
           }
       }
    }
    
    void measure_position()
    {
         for(int k = 0; k < vec.size(); ++k)
        {
            if(vec[k]->measure_unit == "km")
            {
                cout << "Position = " << vec[k]->measure() << " km" << endl;
            }
        }
    }
    
    void list_sensors();
};     

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

int main()
{
    int n;
    GPS_System A;
    Acceleration B;
    Gyroscop D;
    Position C;
    cout << "Welcome GPS_System"<< endl;
    cout<<"Which sensor do you want to connect?"<<endl;
    do {
    cout<<"To connect the Accelerometer, press - 1"<<endl;
    cout<<"To connect the Gyroscope, press - 2 "<<endl;
    cout<<"To connect the Position, press - 3 "<<endl;
    cin>> n;
    switch (n)
    {case 1:
        A.add_sensor(&B);
         A.measure_acc();
         break;
    case 2:
         A.add_sensor(&D);
         A.measure_gyro();
         break;
    case 3:
         A.add_sensor(&C);
         A.measure_position();
         break;
    default: continue;
    }
    
    }while(9);
    return 0;
}