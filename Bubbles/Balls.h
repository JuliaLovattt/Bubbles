
#pragma once
#define BALL_H
#define BUBBLE_SIZE 20

#include <SFML/Graphics.hpp>
class Ball : public sf::CircleShape
{
public:
    //positions, colour
    Ball(float radius, const sf::Color& c, float posX, float posY);

    void setVelocity(float newXVel, float newYVel);

    float getXVelo();
    float getYVelo();

    int ballColor;

private:

    float xVelo;
    float yVelo;
    float radius = 50.f;

};


