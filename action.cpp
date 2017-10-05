#include "action.h"

namespace wsd
{

	Action::Action(const std::string p, const std::string r)
	{
        face = p;
        rotation = r;

	}

    Action::~Action()
    {

    }

    void Action::Display() const
    {
        std::cout << "rotating " << this->face << " " << this->rotation << "." << std::endl;
    }

    const std::string Action::GetRotation() const
    {
    	return this->rotation;
    }

    const std::string Action::GetFace() const
    {
        return this->face;
    }

}