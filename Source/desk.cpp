#include "desk.h"
using namespace std;

Desk::Desk( )
{
    this->name = "desk";
}

Desk::Desk( int x, int y)
{
    this->x_coord = x;
    this->y_coord = y;
    this->width = 10;
    this->length = 16;
}

Desk::Desk( string name)
{
    this->name = name;
}

/* desk_matrix must contain a matrix of size 10*16 initialized with characters ' ' */
void Desk::picture_matrix( char ** desk_matrix)
{
    /* desk picture setting */
    desk_matrix[0] = (char *) "   ____________ ";
    desk_matrix[1] = (char *) "  /            /";
    desk_matrix[2] = (char *) " /            /|";
    desk_matrix[3] = (char *) "/____________/ |";
    desk_matrix[4] = (char *) "| |    |  _  | |";
    desk_matrix[5] = (char *) "| |____|_____| |";
    desk_matrix[6] = (char *) "| /    |  _  |/|";
    desk_matrix[7] = (char *) "|/|    |_____| |";
    desk_matrix[8] = (char *) "|      |     |  ";
    desk_matrix[9] = (char *) "|      |     |  ";
}
