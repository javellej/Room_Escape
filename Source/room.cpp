#include <iostream>
/* algorithm included for the function std::fill_n to initialize an array with a specific value (a bit heavy though) */
#include <algorithm>
#include "room.h"
#include "furniture.h"
using namespace std;

Room::Room( int room_width, int room_length, Chair c)
{
    this->width = room_width;
    this->length = room_length;
    this->chair = c;
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

    /* inserting the pictures of the furnitures */
    char * chair_matrix[8];
    for ( int i=0; i<8; i++ )
    {
        chair_matrix[i] = new char[5];
        fill_n( chair_matrix[i], 5, ' ');
    }
    this->chair.picture_matrix( chair_matrix);
    for ( int i=0; i<8; i++ )
    {
        for ( int j=0; j<5; j++ )
        {
            room_matrix[i+1][j+20] = chair_matrix[i][j];
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
