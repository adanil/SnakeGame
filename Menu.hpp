//
//  Menu.hpp
//  SnakeGame
//
//  Created by Даниил Автушко on 04/05/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#ifndef Menu_hpp
#define Menu_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <sstream>
using namespace sf;

void gameover(RenderWindow& window,int score); //Меню после игры
int mainMenu(RenderWindow& window); //Меню перед игрой
#endif /* Menu_hpp */
