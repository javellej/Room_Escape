#include "chair.h"
using namespace std;

Chair::Chair( )
{
    this->name = "default";
    this->width = 8;
    this->length = 5;
}

Chair::Chair( int x, int y)
{
    this->x_coord = x;
    this->y_coord = y;
    this->width = 8;
    this->length = 5;
}

Chair::Chair( string name)
{
    this->name = name;
    this->width = 8;
    this->length = 5;
}

/* chair_matrix must contain a matrix of size 8*5 initialized with characters ' ' */
void Chair::picture_matrix( char ** chair_matrix)
{
    /* chair picture setting */
    chair_matrix[0] = (char *) "   _ ";
    chair_matrix[1] = (char *) "  | |";
    chair_matrix[2] = (char *) "  | |";
    chair_matrix[3] = (char *) "  |_|";
    chair_matrix[4] = (char *) " /  /";
    chair_matrix[5] = (char *) "/__/|";
    chair_matrix[6] = (char *) "|| ||";
    chair_matrix[7] = (char *) "|  | ";
}
