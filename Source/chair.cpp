#include <algorithm>
#include "chair.h"
using namespace std;

Chair::Chair( )
{
    this->name = "default";
}

Chair::Chair( string name)
{
    this->name = name;
}

/* chair_matrix must contain a matrix of size 8*5 initialized with characters ' ' */
void Chair::picture_matrix( char ** chair_matrix)
{
    /* chair picture setting */
    chair_matrix[0][3] = '_';
    chair_matrix[1][2] = '|';
    chair_matrix[1][4] = '|';
    chair_matrix[2][2] = '|';
    chair_matrix[2][4] = '|';
    chair_matrix[3][2] = '|';
    chair_matrix[3][3] = '_';
    chair_matrix[3][4] = '|';
    chair_matrix[4][1] = '/';
    chair_matrix[4][4] = '/';
    chair_matrix[5][0] = '/';
    chair_matrix[5][1] = '_';
    chair_matrix[5][2] = '_';
    chair_matrix[5][3] = '/';
    chair_matrix[5][4] = '|';
    chair_matrix[6][0] = '|';
    chair_matrix[6][1] = '|';
    chair_matrix[6][3] = '|';
    chair_matrix[6][4] = '|';
    chair_matrix[7][0] = '|';
    chair_matrix[7][3] = '|';
}
