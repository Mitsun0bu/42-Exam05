# include "Dummy.hpp"

// DEFAULT CONSTRUCTOR
Dummy::Dummy()
	: ATarget("Target Practice Dummy")
{
	return;
}
	
// DESTRUCTOR
Dummy::~Dummy()
{
	return ;
}				

// METHOD
ATarget* Dummy::clone() const
{
	return (new Dummy());
}
