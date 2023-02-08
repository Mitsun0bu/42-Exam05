# include "ASpell.hpp"

// DEFAULT CONSTRUCTOR
ASpell::ASpell()
{
	return ;
}

// CONSTRUCTOR
ASpell::ASpell(std::string const & name, std::string const & effects)
	: _name(name), _effects(effects)
{
	return ;
}

// COPY CONSTRUCTOR
ASpell::ASpell(ASpell const & src)
{
	*this = src;
}

// ASSIGNMENT OPERATOR OVERLOAD
ASpell& ASpell::operator=(ASpell const & src)
{
	_name		= src._name;
	_effects	= src._effects;
	return (*this);
}

// DESTRUCTOR
ASpell::~ASpell()
{
	return ;
}

// GETTERS
std::string const & ASpell::getName() const
{
	return (_name);
}

std::string const & ASpell::getEffects() const
{
	return (_effects);
}

// METHOD
void ASpell::launch(ATarget const & targetRef) const
{
	targetRef.getHitBySpell(*this);
}
