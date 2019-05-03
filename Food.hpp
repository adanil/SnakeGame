//
//  Food.hpp
//  SnakeGame
//
//  Created by Даниил Автушко on 03/05/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#ifndef Food_hpp
#define Food_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>

using namespace sf;

class Food{
    float x,y,h,w;
    Image foodimage;
    Texture foodTexture;
    Sprite foodSprite;
public:
    Food();
    void spawn();
    Sprite getSprite();
    float getX();
    float getY();
    void respawn();
};

#endif /* Food_hpp */
