#ifndef FURNITURE_H
#define FURNITURE_H

#include <string>
#include "object.h"
using namespace std;

class Furniture
{
    public:

        int x_coord, y_coord;
        int width, length;
        string name;
        Object over;
        Object under;   

        Furniture( );

        string get_name( void);
        Object look_over( void);
        Object look_under( void);
        virtual void picture_matrix( char **) = 0;
};

#endif /* FURNITURE_H */
