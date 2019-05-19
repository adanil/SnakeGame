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
protected:
    std::string direction; //Направление частей змейки
    float x,y,speed; //Координаты и скорость частей змейки
    Image snakePartImage; //Изображение части змейки
    Texture snakePartTexture; //Текстура части змейки
    Sprite snakePartSprite; //Иконка части змейки
public:
    SnakePart(float x_ = 0,float y_ = 0,float speed_ = 1,std::string direction_ = "right");
    void update(float x_,float y_,float speed_,std::string direction_); //Обновление положения части змейки на экране
    std::string getDirection(); //Получение направления части змейки
    float getSpeed(); //Получение скорости части змейки
    Sprite getSprite(); //Получение иконки части змейки
    float getX(); //Получение координаты x части змейки
    float getY(); //Получение координаты y части змейки
    void setIm(); //Установка изображения части змейки
};

#endif /* SnakePart_hpp */
