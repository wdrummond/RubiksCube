#ifndef _STATE_H_
#define _STATE_H_
#include "ai_search.h"
#include "rubixcube.h"
#include <string>
#include <vector>

namespace wsd
{
  class State : public ai::Search::State
    {      
    public:
      State(std::vector<std::string> colors);
      State(const State &rhs);
      virtual ~State();
      void Display() const;
      RubiksCube getCube() const;
     // void rotateCube(const ai::Search::Action * const a1);
      virtual bool IsEqual(const ai::Search::State * const state_in) const;
      virtual bool IsLessThan(const ai::Search::State * const state_in) const;
	
      RubiksCube cube1;

    protected:
    private:
    };

}
#endif /* _STATE_H_ */
/* Local Variables: */
/* mode:c++         */
/* End:             */