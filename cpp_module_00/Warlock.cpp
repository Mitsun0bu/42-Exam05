#include "Warlock.hpp"

// CONSTRUCTOR
Warlock::Warlock(std::string const &name, std::string const &title)
    : _name(name), _title(title)
{
    std::cout   << _name
                << ": This looks like another boring day.\n";
}

// DESTRUCTOR
Warlock::~Warlock()
{
    std::cout   << _name
                << ": My job here is done!\n";
}

// GETTERS
std::string const & Warlock::getName() const
{
    return (_name);
}

std::string const & Warlock::getTitle() const
{
    return (_title);
}

// SETTER
void Warlock::setTitle(std::string const & title)
{
    this->title = title;
}

// METHOD
void Warlock::introduce() const
{
    std::cout   << _name 
                << ": I am "
                << _name
                << ", "
                << _title
                << "!\n";
}