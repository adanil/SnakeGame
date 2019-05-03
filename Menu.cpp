//
//  Menu.cpp
//  SnakeGame
//
//  Created by Даниил Автушко on 04/05/2019.
//  Copyright © 2019 Даниил Автушко. All rights reserved.
//

#include "Menu.hpp"


void gameover(RenderWindow& window,int score){
    Font font;
    std::ostringstream ScoreString;
    ScoreString << score;
    font.loadFromFile("/Users/daniilavtusko/Desktop/coding/SnakeGame/SnakeGame/fontGameOver.ttf");
    Text sc("Your score:",font,90);
    Text exit("Exit",font,80);
    sc.setString("Your score: "+ScoreString.str());
    sc.setPosition(530, 200);
    exit.setPosition(680, 400);
    Texture textureBg;
    textureBg.loadFromFile("/Users/daniilavtusko/Desktop/coding/SnakeGame/SnakeGame/Img/textureBg.jpg");
    Sprite spriteBg(textureBg);
    bool isMenu = true;
    int menuNum = 0;
    while (isMenu) {
        
        
        
        if (IntRect(680, 400, 100, 100).contains(Mouse::getPosition(window))) { exit.setColor(Color::Blue); menuNum = 1; }
        if (!IntRect(680, 400, 100, 100).contains(Mouse::getPosition(window))) { exit.setColor(Color::White); }
        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (menuNum == 1) isMenu = false;//если нажали первую кнопку, то выходим из меню
            
            
        }
        window.clear();
        window.draw(spriteBg);
        window.draw(exit);
        window.draw(sc);
        window.display();
    }
    window.close();
}

int mainMenu(RenderWindow& window){
    Font font;
    font.loadFromFile("/Users/daniilavtusko/Desktop/coding/SnakeGame/SnakeGame/fontGameOver.ttf");
    Text start("Start game",font,90);
    Text exit("Exit",font,80);
    start.setPosition(530, 200);
    exit.setPosition(680, 400);
    Texture textureBg;
    textureBg.loadFromFile("/Users/daniilavtusko/Desktop/coding/SnakeGame/SnakeGame/Img/textureBg.jpg");
    Sprite spriteBg(textureBg);
    bool isMenu = true;
    int menuNum = 0;
    while (isMenu) {
        
        
        
        
        if (IntRect(530, 200, 500, 100).contains(Mouse::getPosition(window))) { start.setColor(Color::Blue); menuNum = 2; }
        if (!IntRect(530, 200, 500, 100).contains(Mouse::getPosition(window))) { start.setColor(Color::White); }
        if (IntRect(680, 400, 100, 100).contains(Mouse::getPosition(window))) { exit.setColor(Color::Blue); menuNum = 1; }
        if (!IntRect(680, 400, 100, 100).contains(Mouse::getPosition(window))) { exit.setColor(Color::White); }
        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (menuNum == 1) return 1;//если нажали первую кнопку, то выходим из меню
            if (menuNum == 2) return 2;
            
            
        }
        window.clear();
        window.draw(spriteBg);
        window.draw(exit);
        window.draw(start);
        window.display();
    }
    return 0;
}
