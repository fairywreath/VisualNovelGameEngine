#include "DisplaySpriteCommand.hpp"
#include "Utility.hpp"
#include "Engine.hpp"

#include <cassert>

DisplaySpriteCommand::DisplaySpriteCommand(const std::string& identifier, const std::string& arguments) :
	Command(Type::DisplaySprite, identifier, arguments),
	nPosition()
{
	std::vector<std::string> args = getArguments();

	// for now must have 2 pos coords
	assert(args.size() == 2);
	float x = std::stof(args[0]);
	float y = std::stof(args[1]);

	nPosition.x = x;
	nPosition.y = y;
}

void DisplaySpriteCommand::execute(Engine& engine)
{
	engine.addEntity(getIdentifier(), getIdentifier(), nPosition);
}

std::vector<std::string> DisplaySpriteCommand::getArguments() const
{
	return split(getArgumentString(), ';');
}
