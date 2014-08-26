#ifndef DESK_H
#define DESK_H

#include <string>
#include "furniture.h"
using namespace std;

class Desk: public Furniture
{
    public:
        Desk( );
        Desk( int, int);
        Desk( string name);

        void picture_matrix( char **);
};

#endif /* DESK_H */
