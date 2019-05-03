#include <SFML/Graphics.hpp>
#include <string>
#include "Snake.hpp"
#include "Food.hpp"
#include <iostream>
#include <cmath>
#include "Menu.hpp"

using namespace sf;



int main( )
{
    bool fl = 0;
    sf::RenderWindow window(sf::VideoMode( 1600, 900 ), "Snake" );
    //SnakePart tst(10,10,1,"right");
    sf::Image mapimage;
    mapimage.loadFromFile("/Users/daniilavtusko/Desktop/coding/SnakeGame/SnakeGame/Img/mapTexture.jpg");
    sf::Texture mapTexture;
    mapTexture.loadFromImage(mapimage);
    sf::Sprite mapSprite;
    mapSprite.setTexture(mapTexture);
    Clock clock;
    Snake player;
    Food f;
    f.spawn();
    sf::CircleShape shape(10);
    shape.setFillColor(sf::Color::Red);
    
    while (window.isOpen())
    {
        float time = clock.getElapsedTime().asMicroseconds();
        
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if(abs(player.getX()-f.getX()) < 30 && abs(player.getY() - f.getY()) < 30){
            
            f.respawn();
            player.eated();
            
        }
        
        if (player.getX() < 0 || player.getX() > 1600 || player.getY() < 0 || player.getY() > 900){
            gameover(window,player.getScore());
        }
        for (int i = 0;i < player.getVec().size();i++)
            if (player.getVec()[i].getX() == player.getX() && player.getVec()[i].getY() == player.getY())
                gameover(window,player.getScore());
        //std::cout << player.getX() << ' ' << f.getX() << ' ' << player.getY() << ' ' << f.getY() << std::endl;
        if (Keyboard::isKeyPressed(Keyboard::Left)) player.setDirection("left");
        if (Keyboard::isKeyPressed(Keyboard::Right)) player.setDirection("right");
        if (Keyboard::isKeyPressed(Keyboard::Up)) player.setDirection("up");
        if (Keyboard::isKeyPressed(Keyboard::Down)) player.setDirection("down");
        if (time > 80000*player.getSpeed()){
            //std::cout << time << std::endl;
            
            if (!player.getVec().empty()){
                for (int i = player.getVec().size()-1;i > 0;i--)
                    player.getVec()[i].update(player.getVec()[i-1].getX(), player.getVec()[i-1].getY(),player.getVec()[i-1].getSpeed(),player.getVec()[i-1].getDirection());
                player.getVec()[0].update(player.getX(), player.getY(),player.getSpeed(),player.getDirection());
            }
            player.update();
            clock.restart();
        }
            
        if (fl == 0){
            int res = mainMenu(window);
            fl = 1;
            if (res == 1)
                return EXIT_SUCCESS;
        }
        window.clear();
        window.draw(shape);
        window.draw(mapSprite);
        window.draw(f.getSprite());
        window.draw(player.getSprite());
        if (!player.getVec().empty()){
            player.getVec()[0].setIm();
            window.draw(player.getVec()[0].getSprite());
            for (int i = 1;i < player.getVec().size();i++){
                player.getVec()[i].setIm();
                window.draw(player.getVec()[i].getSprite());
            }
        }
        window.display();
    }
    
    return EXIT_SUCCESS;
}
