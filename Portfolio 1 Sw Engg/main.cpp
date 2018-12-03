#include <iostream>
#include "iotDataQueue.h"

//this is an example
using namespace std;

int main()
{
    iotDataQueue temperature, humidity;    //create two queue objects

    temperature.init();
    humidity.init();

    temperature.Store Temp_Data(10);
    humidity.Store Hum_data(19);

    cout << "Contents of Temperature queue: ";
    cout << temperature.Store Temp_Data() << " ";

    cout << "Contents of Humidity queue: ";
    cout << humidity.Store Hum_Data() << " ";

    return 0;
}


