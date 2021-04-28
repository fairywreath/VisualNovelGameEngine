#ifndef UTILITY_HPP
#define UTILITY_HPP

#include <sstream>

#include <SFML/Window/Keyboard.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/System/String.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Font.hpp>

template <typename Type>
std::string toString(const Type& value);

std::string toString(sf::Keyboard::Key key);

sf::String wrapText(sf::String string, unsigned width, const sf::Font& font, unsigned characterSize,
	unsigned extraLen, bool bold = false);
sf::Color parseColor(std::string str);

#include "Utility.inl"
#endif