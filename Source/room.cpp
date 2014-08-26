#include <iostream>
/* algorithm included for the function std::fill_n to initialize an array with a specific value (a bit heavy though) */
#include <algorithm>
#include "room.h"
#include "furniture.h"
using namespace std;

Room::Room( int room_width, int room_length)
{
    this->width = room_width;
    this->length = room_length;
    this->furniture_total = 0;
}

void Room::add_furniture( Furniture * f)
{
    this->furnitures[furniture_total] = f;
    this->furniture_total++;
}

void Room::display_room( void)
{
    char * room_matrix[width];

    /* prepare the room matrix */
    for ( int i=0; i<width; i++)
    {
        room_matrix[i] = new char[length];
        fill_n( room_matrix[i], length, ' ');
    }
    for ( int i=0; i<length; i++ )
    {
        room_matrix [0][i] = '-';
        room_matrix [width-1][i] = '-';
    }
    for ( int j=1; j<width-1; j++ )
    {
        room_matrix [j][0] = '|';
        room_matrix [j][length-1] = '|';
    }

    /* add picture of first piece of furniture */
    for ( int f_num=0; f_num<furniture_total; f_num++)
    {
        int wid = (this->furnitures[f_num])->width;
        int len = (this->furnitures[f_num])->length;
        int x = (this->furnitures[f_num])->x_coord;
        int y = (this->furnitures[f_num])->y_coord;

        char * furniture_matrix[wid];
        for ( int i=0; i<wid; i++ )
        {
            furniture_matrix[i] = new char[len];
        }
        (this->furnitures[f_num])->picture_matrix( furniture_matrix);
        for ( int i=0; i<wid; i++ )
        {
            for ( int j=0; j<len; j++ )
            {
                room_matrix[i+x][j+y] = furniture_matrix[i][j];
            }
        }
    }

    /* display the room matrix */
    for ( int i=0; i<width; i++ )
    {
        for ( int j=0; j<length; j++ )
        {
            cout << room_matrix[i][j];
        }
        cout << endl;
    }
}

void Room::set_code( int code)
{
    door_code = code;
}

void Room::display_code( void)
{
    cout << Room::door_code << endl;
}
