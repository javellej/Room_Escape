#ifndef ROOM_H
#define ROOM_H

#include "furniture.h"

class Room
{
    public:
        int door_code;
        /* List of furnitures in the room */
        Furniture North;
        Furniture South;
        Furniture East;
        Furniture West;

        Room( Furniture fN, Furniture fS, Furniture fE, Furniture fW);

        void display_room( void);
        void set_code( int);
        void display_code( void);
};

#endif /* ROOM_H */
