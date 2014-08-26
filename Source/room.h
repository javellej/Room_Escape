#ifndef ROOM_H
#define ROOM_H

#include <list>
#include "furniture.h"
using namespace std;

class Room
{
    public:
    
        int width, length;
        int door_code;
        int furniture_total;
        /* List of furnitures in the room */
        Furniture * furnitures[20];

        Room( int, int); 

        void add_furniture( Furniture *);
        void display_room( void);
        void set_code( int);
        void display_code( void);
};

#endif /* ROOM_H */
