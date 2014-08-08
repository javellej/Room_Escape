#ifndef ROOM_H
#define ROOM_H

#include "chair.h"
//#include "table.h"
#include "desk.h"

class Room
{
    public:
    
        int width, length;
        int door_code;
        /* List of furnitures in the room */
        Chair chair;

        Room( int, int, Chair);

        void display_room( void);
        void set_code( int);
        void display_code( void);
};

#endif /* ROOM_H */
