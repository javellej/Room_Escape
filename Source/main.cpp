#include <iostream>
#include <string>
#include "room.h"
#include "chair.h"
#include "desk.h"
#include "object.h"
#include "items.h"
using namespace std;

void create_room( int width, int length)
{
    Room main_room( width, length);
}

int main( )
{
    int value;

    cout << "You are trapped inside a room." << endl;
    Chair chaise_bleue( 2, 5);
    Desk bureau_rouge( 7, 20);
    //Table table_jaune;
    //Room living_room (35, 70, chaise_bleue, bureau_rouge, table_jaune);
    Room living_room (35, 70);
    living_room.add_furniture( &chaise_bleue);
    living_room.add_furniture( &bureau_rouge);
    cout << "yhgvqnbzd" << endl;

    string code = "code: 8732";
    Object paper( 1, code);
    chaise_bleue.under = paper;
    living_room.display_room( );
    cout << (chaise_bleue.look_under( )).name << endl;



/*
    cout << "Please enter a code" << endl;
    cin >> value;
    living_room.set_code( value);
    cout << "The code is" << endl;
    living_room.display_code( );

    Chair chaise_louis_XVI;
    Furniture * f1 = &chaise_louis_XVI;
    cout << f1->get_type( ) << endl;
//    cout << chaise_louis_XVI.type() << endl;
    cout << (f1->under).obj_id << endl;
    cout << (f1->under).name << endl;
*/
    return 0;
}
