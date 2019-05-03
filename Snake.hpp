//
//  Snake.hpp
//  SnakeGame
//
//  Created by Даниил Автушко on 03/05/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#ifndef Snake_hpp
#define Snake_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include "SnakePart.hpp"
using namespace sf;

class Snake{
    float x,y,h,w,speed;
    int score;
    std::vector <SnakePart> vec;
    std::string direction;
    Image snakeimage;
    Texture snakeTexture;
    Sprite snakeSprite;
public:
    Snake();
    void update();
    void setDirection(std::string dir);
    Sprite getSprite();
    float getX();
    float getY();
    std::string getDirection();
    float getSpeed();
    void eated();
    std::vector <SnakePart> &getVec();
    void setSpeed(float speed_);
    int getScore();
};

#endif /* Snake_hpp */
