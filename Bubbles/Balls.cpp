#include "Balls.h"

Ball::Ball(float radius, const sf::Color& c, float posX, float posY)
{
	this->setFillColor(c);
	this->setPosition(posX, posY);
	this->xVelo = 0.0f;
	this->yVelo = 0.0f;
}

void Ball::setVelocity(float newXVel, float newYVel)
{
	this->xVelo = newXVel;
	this->yVelo = newYVel;
}

float Ball::getXVelo()
{
	this->xVelo;
	return 0.0f;
}

float Ball::getYVelo()
{
	this->yVelo;
	return 0.0f;
}
