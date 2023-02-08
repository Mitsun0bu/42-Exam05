# include "Fwoosh.hpp"

// DEFAULT CONSTRUCTOR
Fwoosh::Fwoosh()
	: ASpell("Fwoosh", "fwooshed")
{
	return;
}
	
// DESTRUCTOR
Fwoosh::~Fwoosh()
{
	return ;
}				

// METHOD
ASpell* Fwoosh::clone() const
{
	return (new Fwoosh());
}
