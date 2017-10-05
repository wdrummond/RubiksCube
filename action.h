#ifndef _ACTION_H_
#define _ACTION_H_
#include "ai_search.h"
#include <iostream>
#include <string>

namespace wsd
{
  class Action : public ai::Search::Action
  {
    public:
    Action(const std::string p, const std::string r);
    virtual ~Action();
    virtual void Display() const;
    const std::string GetRotation() const;
    const std::string GetFace() const;

  protected:
    std::string face;
    std::string rotation;

  private:
  };
}

#endif /* _ACTION_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */