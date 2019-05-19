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

class Snake:SnakePart{
    int score; //Счет игрока
    std::vector <SnakePart> vec; //Части змейки
public:
    Snake();
    void update(); //Обновление положения змейки на карте
    void setDirection(std::string dir); //Установка направления змейки
    Sprite getSprite(); //Получение иконки змейки
    float getX(); //Получение координаты по x
    float getY(); //Получение координаты по y
    std::string getDirection(); //Получение направления змейки
    float getSpeed(); //Получения скорости
    void eated(); //Змейка сьела еду
    std::vector <SnakePart> &getVec(); //Получение вектора частей змейки
    void setSpeed(float speed_); //Установка скорости змейки
    int getScore(); //Получение счета игрока
};

#endif /* Snake_hpp */
