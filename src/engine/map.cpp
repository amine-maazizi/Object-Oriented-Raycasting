#include <engine/map.hpp>

int worldMap[MAP_WIDTH][MAP_HEIGHT] =
{
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,0,0,0,0,2,2,2,2,2,0,0,0,0,0,0,0,0,1},
    {1,0,1,1,0,0,0,0,0,0,2,0,0,0,2,0,0,0,0,1,1,0,0,1},
    {1,0,1,0,0,0,0,0,0,0,2,0,0,0,2,0,0,0,0,0,1,0,0,1},
    {1,0,1,0,0,0,3,3,3,0,2,0,0,0,2,0,3,3,3,0,1,0,0,1},
    {1,0,0,0,0,0,3,0,0,0,2,0,0,0,2,0,0,0,3,0,0,0,0,1},
    {1,0,0,0,0,0,3,0,0,0,2,2,2,2,2,0,0,0,3,0,0,0,0,1},
    {1,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,1},
    {1,0,0,0,0,0,3,3,0,0,0,0,0,0,0,0,3,3,3,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,5,5,5,5,5,5,0,0,8,5,5,5,5,5,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,0,5,5,0,0,5,5,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,4,4,0,0,0,0,4,4,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,4,4,0,0,0,0,0,0,4,4,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,4,4,0,0,0,0,0,0,0,0,4,4,0,0,0,0,1},
    {1,0,0,0,0,0,4,4,0,0,0,0,0,0,0,0,0,0,4,4,0,0,0,1},
    {1,0,0,0,0,4,4,0,0,0,0,0,0,0,0,0,0,0,0,4,4,0,0,1},
    {1,0,0,0,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,0,1},
    {1,0,0,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,1},
    {1,0,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,1},
    {1,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
};


