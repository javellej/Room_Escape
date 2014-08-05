#include <iostream>
#include <string>
#include "room.h"
#include "chair.h"
using namespace std;

int main( )
{
    int value;
    cout << "You are trapped inside a room." << endl;
    Chair c1, c2, c3, c4;
    Room living_room (c1, c2, c3, c4);
    living_room.display_room( );
    cout << "Please enter a code" << endl;
    cin >> value;
    living_room.set_code( value);
    cout << "The code is" << endl;
    living_room.display_code( );

    Chair chaise_louis_XVI;
    Furniture * f1 = &chaise_louis_XVI;
    cout << f1->get_type( ) << endl;
//    cout << chaise_louis_XVI.type() << endl;
    return 0;
}
