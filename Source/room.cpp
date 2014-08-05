#include <iostream>
#include "room.h"
using namespace std;

Room::Room( Furniture fN, Furniture fS, Furniture fE, Furniture fW)
{
    this->North = fN;
    this->South = fS;
    this->East = fE;
    this->West = fW;
}

void Room::display_room( void)
{
    cout << "----------------------------------------" << endl;
    cout << "|                " << (this->North).get_type( ) << "                 |" << endl;
    cout << "|                                      |" << endl;
    cout << "|" << (this->West).get_type( ) << "                            " << (this->East).get_type( ) << "|" << endl;
    cout << "|                                      |" << endl;
    cout << "|                " << (this->South).get_type( ) << "                 |" << endl;
    cout << "----------------------------------------" << endl;
}

void Room::set_code( int code)
{
    door_code = code;
}

void Room::display_code( void)
{
    cout << Room::door_code << endl;
}
