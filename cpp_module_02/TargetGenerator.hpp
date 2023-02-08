# pragma once

# include <map>
# include "ATarget.hpp"

class TargetGenerator
{
    private:

        // ATTRIBUTES
        std::map<std::string, ATarget*> _targetList;

        // COPY CONSTRUCTOR
                                        TargetGenerator(TargetGenerator const & src);

        // ASSIGNMENT OPERATOR OVERLOAD
        TargetGenerator&                operator=(TargetGenerator const & src);

    public:

        // DEFAULT CONSTRUCTOR
                                        TargetGenerator();
    
        // DESTRUCTOR
                                        ~TargetGenerator();

        // METHODS
        void                            learnTargetType(ATarget* targetPtr);
        void                            forgetTargetType(std::string const & targetName);
        ATarget*                        createTarget(std::string const & targetName);
};