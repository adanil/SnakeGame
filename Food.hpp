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
    float x,y; //Координаты еды
    Image foodimage; //Изображение еды
    Texture foodTexture; //Тектсура еды
    Sprite foodSprite; //Иконка еды
public:
    Food();
    void spawn(); //Появление еды
    Sprite getSprite(); //Получение иконки
    float getX(); //Получение координаты еды по x
    float getY(); //Получение координаты еды по y
    void respawn(); //Повторное появление еды
};

#endif /* Food_hpp */
