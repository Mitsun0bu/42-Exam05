# include "ATarget.hpp"

// DEFAULT CONSTRUCTOR
ATarget::ATarget()
{
	return ;
}	

// CONSTRUCTOR
ATarget::ATarget(std::string const & type)
	: _type(type)
{
	return ;
}	

// COPY CONSTRUCTOR
ATarget::ATarget(ATarget const & src)
{
	*this = src;
}

// ASSIGNMENT OPERATOR OVERLOAD
ATarget& ATarget::operator=(ATarget const & src)
{
	_type		= src._type;
	return (*this);
}

// DESTRUCTOR
ATarget::~ATarget()
{
	return ;
}

// GETTERS
std::string const & ATarget::getType() const
{
	return (_type);
}


// METHOD
void ATarget::getHitBySpell(ASpell const & spellRef) const
{
	std::cout	<< _type
			<< " has been " 
			<< spellRef.getEffects()
			<< "!\n";
}
