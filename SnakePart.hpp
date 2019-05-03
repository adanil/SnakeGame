//
//  SnakePart.hpp
//  SnakeGame
//
//  Created by Даниил Автушко on 03/05/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#ifndef SnakePart_hpp
#define SnakePart_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <string>

using namespace sf;

class SnakePart{
    std::string direction;
    float x,y,speed;
    Image snakePartImage;
    Texture snakePartTexture;
    Sprite snakePartSprite;
public:
    SnakePart(float x_,float y_,float speed_,std::string direction_);
    void update(float x_,float y_,float speed_,std::string direction_);
    std::string getDirection();
    float getSpeed();
    Sprite getSprite();
    float getX();
    float getY();
    void setIm();
};

#endif /* SnakePart_hpp */
