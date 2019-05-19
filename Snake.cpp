//
//  Snake.cpp
//  SnakeGame
//
//  Created by Даниил Автушко on 03/05/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include "Snake.hpp"


using namespace sf;

Snake::Snake(){
    speed = 1;
    score = 0;
    direction = "right";
    snakePartImage.loadFromFile("/Users/daniilavtusko/Desktop/coding/SnakeGame/SnakeGame/Img/snakeTexture.jpg");
    snakePartTexture.loadFromImage(snakePartImage);
    snakePartSprite.setTexture(snakePartTexture);
}
void Snake::update(){
    if (direction == "left"){ snakePartSprite.setPosition(x-30, y); x += -30;}
    else if (direction == "right"){ snakePartSprite.setPosition(x+30, y); x += 30;}
    else if (direction == "up"){ snakePartSprite.setPosition(x, y-30); y += -30;}
    else{ snakePartSprite.setPosition(x, y+30); y += 30;}
}
void Snake::setDirection(std::string dir){
    direction = dir;
}
Sprite Snake::getSprite(){
    return snakePartSprite;
}
float Snake::getX(){
    return x;
}
float Snake::getY(){
    return y;
}
void Snake::eated(){
    score++;
    if (speed > 0.3)
        speed -= 0.01;
    if (vec.empty()){
        if (direction == "left"){
            SnakePart p(x+30,y,speed,direction);
            vec.push_back(p);
        }
        else if (direction == "right"){
            SnakePart p (x-30,y,speed,direction);
            vec.push_back(p);
        }
        else if (direction == "up"){
            SnakePart p (x,y+30,speed,direction);
            vec.push_back(p);
        }
        else{
            SnakePart p (x,y-30,speed,direction);
            vec.push_back(p);
        }
    }
    else{
        if (vec[vec.size()-1].getDirection() == "left"){
            SnakePart p(vec[vec.size()-1].getX()+30,vec[vec.size()-1].getY(),vec[vec.size()-1].getSpeed(),vec[vec.size()-1].getDirection());
            vec.push_back(p);
        }
        else if (vec[vec.size()-1].getDirection() == "right"){
            SnakePart p (vec[vec.size()-1].getX()-30,vec[vec.size()-1].getY(),vec[vec.size()-1].getSpeed(),vec[vec.size()-1].getDirection());
            vec.push_back(p);
        }
        else if (vec[vec.size()-1].getDirection() == "up"){
            SnakePart p (vec[vec.size()-1].getX(),vec[vec.size()-1].getY()+30,vec[vec.size()-1].getSpeed(),vec[vec.size()-1].getDirection());
            vec.push_back(p);
        }
        else{
            SnakePart p (vec[vec.size()-1].getX(),vec[vec.size()-1].getY()-30,vec[vec.size()-1].getSpeed(),vec[vec.size()-1].getDirection());
            vec.push_back(p);
        }
    }
}

std::vector<SnakePart> &Snake::getVec(){
    return vec;
}
std::string Snake::getDirection(){
    return direction;
}
float Snake::getSpeed(){
    return speed;
}
int Snake::getScore(){
    return score;
}
