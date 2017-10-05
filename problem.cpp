#include "action.h"
#include "problem.h"
#include "state.h"
#include <iostream>

namespace wsd
{
	Problem::Problem(ai::Search::State *initial_state_in)
       : ai::Search::Problem(initial_state_in)
	{
		goalCube.setWhite("white", "white", "white", "white", "white", "white", "white", "white", "white");
        goalCube.setGreen("green", "green", "green", "green", "green", "green", "green", "green", "green");
        goalCube.setRed("red", "red", "red", "red", "red", "red", "red", "red", "red");
        goalCube.setBlue("blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue");
        goalCube.setOrange("orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange");
        goalCube.setYellow("yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow");
	}

    Problem::~Problem()
    {
        //
    }

    std::vector<ai::Search::Action *> Problem::Actions(const ai::Search::State * const state_in)
    {
        //const State * const rs1 = dynamic_cast<const State * const>(state_in);
        std::vector<ai::Search::Action *> actions;

        actions.push_back(new Action("white", "cw"));
        actions.push_back(new Action("white", "ccw"));
        actions.push_back(new Action("green", "cw"));
        actions.push_back(new Action("green", "ccw"));
        actions.push_back(new Action("red", "cw"));
        actions.push_back(new Action("red", "ccw"));
        actions.push_back(new Action("blue", "cw"));
        actions.push_back(new Action("blue", "ccw"));
        actions.push_back(new Action("orange", "cw"));
        actions.push_back(new Action("orange", "cw"));
        actions.push_back(new Action("yellow", "cw"));
        actions.push_back(new Action("yellow", "ccw"));

        return actions;

    }

    ai::Search::State *Problem::Result(const ai::Search::State * const state_in, const ai::Search::Action * const action_in)
    {
    	const State * const rs1 = dynamic_cast<const State * const>(state_in);
        const Action * const ra1 = dynamic_cast<const Action * const>(action_in);
    	wsd::State *rs2 = new wsd::State(*rs1);
    	std::pair <std::string, std::string> rotatePair; 
    	rotatePair.first = ra1->GetFace();
    	rotatePair.second = ra1->GetRotation();
        rs2->cube1.rotateFace(rotatePair);
        return rs2;
    }


    bool Problem::GoalTest(const ai::Search::State * const state_in) const
    {
        const State * const rhs = dynamic_cast<const State * const>(state_in);

        if (goalCube == rhs->cube1) {
            return true;
        }

        return false;
    	
    }

    double Problem::StepCost(const ai::Search::State  * const state1_in,
                    const ai::Search::Action * const action_in,
                    const ai::Search::State  * const state2_in) const
    {
        return 1;
    }

    double Problem::Heuristic(const ai::Search::State  * const state_in) const
    {
        //UNTESTED
        return 0;
    }
}
