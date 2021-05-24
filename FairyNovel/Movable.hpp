#ifndef MOVABLE_HPP
#define MOVABLE_CPP

#include <SFML/Graphics/Transformable.hpp>
#include <SFML/System/Time.hpp>

class Movable
{
public:
	explicit Movable(sf::Transformable* transformable);

	void update(sf::Time dt);
	void move(float time, const sf::Vector2f& dest, const sf::Vector2f& source);

	bool inMovement() const;
	void skipMovement();

private:
	sf::Transformable* nTransformable;

	sf::Vector2f nStartingPosition;
	sf::Vector2f nTargetPosition;
	float nMoveTime;
	bool nInMovement;

	sf::Time nMoveElapsed;
};



#endif