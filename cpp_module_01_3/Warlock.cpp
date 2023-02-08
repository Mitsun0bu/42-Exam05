# include "Warlock.hpp"

// CONSTRUCTOR
Warlock::Warlock(std::string const & name, std::string const & title)
	: _name(name), _title(title)
{
	std::cout	<< _name
				<< ": This looks like another boring day.\n";
}	

// DESTRUCTOR
Warlock::~Warlock()
{
	std::cout	<< _name
			<< ": My job here is done!\n";

	std::map<std::string, ASpell*>::iterator	head = _spellList.begin();
	std::map<std::string, ASpell*>::iterator	tail = _spellList.end();
	while(head != tail)
	{
		delete (head->second);
		head ++;
	}
	_spellList.clear();
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
	_title = title;
}

// METHODS
void Warlock::introduce() const
{
	std::cout	<< _name
			<< ": I am "
			<< _name
			<< ", "
			<< _title
			<< "!\n";
}

void Warlock::learnSpell(ASpell* spellPtr)
{
	if (spellPtr)
		_spellList.insert(std::pair<std::string, ASpell*>(spellPtr->getName(), spellPtr->clone()));
}

void Warlock::forgetSpell(std::string spellName)
{
	std::map<std::string, ASpell*>::iterator it = _spellList.find(spellName);
	if (it != _spellList.end())
		delete (it->second);
	_spellList.erase(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget const & targetRef)
{
	ASpell* spell = _spellList[spellName];
	if (spell)
		spell->launch(targetRef);
}
