//
//  GameMenu.cpp
//  SnakeGame
//
//  Created by Даниил Автушко on 03/05/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include "GameMenu.hpp"
#include <iostream>


void GMenu(RenderWindow & window){
    Texture button1,button2,bg;
    Sprite spriteBut1,spriteBut2,spriteBg;
    bool isMenu;
    int menuNum;
    button1.loadFromFile("/Users/daniilavtusko/Desktop/coding/SnakeGame/SnakeGame/startGame.jpg");
    spriteBut1.setTexture(button1);
    spriteBut1.setPosition(50, 50);
    bg.loadFromFile("/Users/daniilavtusko/Desktop/coding/SnakeGame/SnakeGame/textureBg.jpg");
    spriteBg.setTexture(bg);
    isMenu = true;
    menuNum = 0;
    while (isMenu) {
        
        if (IntRect(50, 50, 150, 150).contains(Mouse::getPosition(window))) { spriteBut1.setColor(Color::Black); menuNum = 1; }
        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (menuNum == 1) isMenu = false;//если нажали первую кнопку, то выходим из меню
            
        }
        std::cout << "ku" << std::endl;
        window.clear();
        window.draw(spriteBg);
        window.draw(spriteBut1);
        window.display();
    }
    
}
