//
//  Food.cpp
//  SnakeGame
//
//  Created by Даниил Автушко on 03/05/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include "Food.hpp"

Food::Food(){
    srand(time(0));
    foodimage.loadFromFile("/Users/daniilavtusko/Desktop/coding/SnakeGame/SnakeGame/Img/food.png");
    foodTexture.loadFromImage(foodimage);
    foodSprite.setTexture(foodTexture);
    x = rand()%1550;
    y = rand()%850;
}
void Food::spawn(){
    foodSprite.setPosition(x, y);
}
Sprite Food::getSprite(){
    return foodSprite;
}
float Food::getX(){
    return x;
}
float Food::getY(){
    return y;
}
void Food::respawn(){
    x = rand()%1550;
    y = rand()%850;
    spawn();
}
