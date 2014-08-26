#include "table.h"
using namespace std;

Table::Table( )
{
    this->name = "table";
}

Table::Table( int x, int y)
{
    this->x_coord = x;
    this->y_coord = y;
    this->width = 17;
    this->length = 19;
}

Table::Table( string name)
{
    this->name = name;
}

/* table_matrix must contain a matrix of size 17*19 initialized with characters ' ' */
void Table::picture_matrix( char ** table_matrix)
{
    /* table picture setting */
    table_matrix[0]  = (char *) "     _____________ ";
    table_matrix[1]  = (char *) "    /             /";
    table_matrix[2]  = (char *) "   /             //";
    table_matrix[3]  = (char *) "  /             //|";
    table_matrix[4]  = (char *) " /             // |";
    table_matrix[5]  = (char *) "______________// /|";
    table_matrix[6]  = (char *) "______________/ / |";
    table_matrix[7]  = (char *) "|             |/  |";
    table_matrix[8]  = (char *) "|-------------|   |";
    table_matrix[9]  = (char *) "|    |        |   |";
    table_matrix[10] = (char *) "|    |        |   |";
    table_matrix[11] = (char *) "|    0        |   0";
    table_matrix[12] = (char *) "|    0        |   0";
    table_matrix[13] = (char *) "|             |    ";
    table_matrix[14] = (char *) "|             |    ";
    table_matrix[15] = (char *) "0             0    ";
    table_matrix[16] = (char *) "0             0    ";
}
