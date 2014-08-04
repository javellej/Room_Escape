#include <iostream>
#include "room.h"
using namespace std;

void Room::set_code( int code)
{
    door_code = code;
}

void Room::display_code( )
{
    cout << Room::door_code << endl;
}
