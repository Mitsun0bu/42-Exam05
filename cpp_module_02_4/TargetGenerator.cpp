# include "TargetGenerator.hpp"

// DEFAULT CONSTRUCTOR
TargetGenerator::TargetGenerator()
{
	return ;
}

// DESTRUCTOR
TargetGenerator::~TargetGenerator()
{
	std::map<std::string, ATarget*>::iterator	head = _targetList.begin();
	std::map<std::string, ATarget*>::iterator	tail = _targetList.end();
	while(head != tail)
	{
		delete (head->second);
		++ head;
	}
	_targetList.clear();
}

// METHOD
void TargetGenerator::learnTargetType(ATarget* targetPtr)
{
	if (targetPtr)
		_targetList.insert(std::pair<std::string, ATarget*>(targetPtr->getType(), targetPtr->clone()));
}

void TargetGenerator::forgetTargetType(std::string const & targetType)
{
	std::map<std::string, ATarget*>::iterator	it = _targetList.find(targetType);
	if (it != _targetList.end())
		delete (it->second);
	_targetList.erase(targetType);
}

ATarget* TargetGenerator::createTarget(std::string const & targetType)
{
	std::map<std::string, ATarget*>::iterator	it = _targetList.find(targetType);
	if (target)
		return (_targetList[targetType]);
	return (NULL);
}
