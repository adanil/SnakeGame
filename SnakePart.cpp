//
//  SnakePart.cpp
//  SnakeGame
//
//  Created by Даниил Автушко on 03/05/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include "SnakePart.hpp"


SnakePart::SnakePart(float x_,float y_,float speed_,std::string direction_){
    direction = direction_;
    speed = speed_;
    x = x_;
    y = y_;
    
    snakePartSprite.setPosition(x, y);
}
void SnakePart::update(float x_,float y_,float speed_,std::string direction_){
    if (direction == "left"){ snakePartSprite.setPosition(x_, y_); x = x_; y = y_;}
    else if (direction == "right"){ snakePartSprite.setPosition(x_, y_); x = x_; y = y_;}
    else if (direction == "up"){ snakePartSprite.setPosition(x_, y_); y = y_;x = x_;}
    else{ snakePartSprite.setPosition(x_, y_); y = y_;x = x_;}
    direction = direction_;
    speed = speed_;
}
std::string SnakePart::getDirection(){
    return direction;
}
float SnakePart::getSpeed(){
    return speed;
}

Sprite SnakePart::getSprite(){
    return snakePartSprite;
}
float SnakePart::getX(){
    return x;
}
float SnakePart::getY(){
    return y;
}
void SnakePart::setIm(){
    snakePartImage.loadFromFile("/Users/daniilavtusko/Desktop/coding/SnakeGame/SnakeGame/Img/snakePartTexture.jpg");
    snakePartTexture.loadFromImage(snakePartImage);
    snakePartSprite.setTexture(snakePartTexture);
}
