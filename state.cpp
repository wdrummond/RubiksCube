#include "state.h"

namespace wsd
{
	State::State(std::vector<std::string> colors)
	{
        cube1.setWhite(colors[0], colors[1], colors[2], colors[3], colors[4], colors[5], colors[6], colors[7], colors[8]);
    	cube1.setGreen(colors[9], colors[10], colors[11], colors[12], colors[13], colors[14], colors[15], colors[16], colors[17]);
    	cube1.setRed(colors[18], colors[19], colors[20], colors[21], colors[22], colors[23], colors[24], colors[25], colors[26]);
    	cube1.setBlue(colors[27], colors[28], colors[29], colors[30], colors[31], colors[32], colors[33], colors[34], colors[35]);
    	cube1.setOrange(colors[36], colors[37], colors[38], colors[39], colors[40], colors[41], colors[42], colors[43], colors[44]);
    	cube1.setYellow(colors[45], colors[46], colors[47], colors[48], colors[49], colors[50], colors[51], colors[52], colors[53]);
	}

    State::State(const State &rhs)
    {
        std::vector<std::string> otherW = rhs.cube1.getWhite();
        std::vector<std::string> otherG = rhs.cube1.getGreen();
        std::vector<std::string> otherR = rhs.cube1.getRed();
        std::vector<std::string> otherB = rhs.cube1.getBlue();
        std::vector<std::string> otherO = rhs.cube1.getOrange();
        std::vector<std::string> otherY = rhs.cube1.getYellow();

        cube1.setWhite(otherW[0], otherW[1], otherW[2], otherW[3], otherW[4], otherW[5], otherW[6], otherW[7], otherW[8]);
        cube1.setGreen(otherG[0], otherG[1], otherG[2], otherG[3], otherG[4], otherG[5], otherG[6], otherG[7], otherG[8]);
        cube1.setRed(otherR[0], otherR[1], otherR[2], otherR[3], otherR[4], otherR[5], otherR[6], otherR[7], otherR[8]);
        cube1.setBlue(otherB[0], otherB[1], otherB[2], otherB[3], otherB[4], otherB[5], otherB[6], otherB[7], otherB[8]);
        cube1.setOrange(otherO[0], otherO[1], otherO[2], otherO[3], otherO[4], otherO[5], otherO[6], otherO[7], otherO[8]);
        cube1.setYellow(otherY[0], otherY[1], otherY[2], otherY[3], otherY[4], otherY[5], otherY[6], otherY[7], otherY[8]);

    }

    State::~State()
    {

    }

    void State::Display() const
    {
        //std::cout << "-------" << std::endl;
        //do nothing?
    }

    RubiksCube State::getCube() const
    {
        return cube1;
    }

    // void State::rotateCube(const ai::Search::Action * const a1)
    // {
    //     const wsd::Action * const ra1 = dynamic_cast<const Action * const>(a1);
    //     std::pair <std::string, std::string> rotatePair; 
    //     rotatePair.first = ra1->GetFace();
    //     rotatePair.second = ra1->GetRotation();
    //     cube1.rotateFace(rotatePair);
    // }

    bool State::IsEqual(const ai::Search::State * const state_in) const
    {
    	const State * const rhs = dynamic_cast<const State * const>(state_in);
    	
        if (cube1 == rhs->cube1) {
            return true;
        }

        return false;
    	
    }

    bool State::IsLessThan(const ai::Search::State * const state_in) const
    {
    	//UNTESTED
        const State * const rhs = dynamic_cast<const State * const>(state_in);
        std::string localCube = "";
        std::string otherCube = "";

        //The Local Cube!
        for (size_t i = 0; i < cube1.getWhite().size(); i++)
        {
            localCube += cube1.getWhite()[i];
        }
        for (size_t i = 0; i < cube1.getGreen().size(); i++)
        {
            localCube += cube1.getGreen()[i];
        }
        for (size_t i = 0; i < cube1.getRed().size(); i++)
        {
            localCube += cube1.getRed()[i];
        }
        for (size_t i = 0; i < cube1.getBlue().size(); i++)
        {
            localCube += cube1.getBlue()[i];
        }
        for (size_t i = 0; i < cube1.getOrange().size(); i++)
        {
            localCube += cube1.getOrange()[i];
        }
        for (size_t i = 0; i < cube1.getYellow().size(); i++)
        {
            localCube += cube1.getYellow()[i];
        }
        //The Other Cube!
        for (size_t i = 0; i < rhs->cube1.getWhite().size(); i++)
        {
            otherCube += rhs->cube1.getWhite()[i];
        }
        for (size_t i = 0; i < rhs->cube1.getGreen().size(); i++)
        {
            otherCube += rhs->cube1.getGreen()[i];
        }
        for (size_t i = 0; i < rhs->cube1.getRed().size(); i++)
        {
            otherCube += rhs->cube1.getRed()[i];
        }
        for (size_t i = 0; i < rhs->cube1.getBlue().size(); i++)
        {
            otherCube += rhs->cube1.getBlue()[i];
        }
        for (size_t i = 0; i < rhs->cube1.getOrange().size(); i++)
        {
            otherCube += rhs->cube1.getOrange()[i];
        }
        for (size_t i = 0; i < rhs->cube1.getYellow().size(); i++)
        {
            otherCube += rhs->cube1.getYellow()[i];
        }

        // std::cout << localCube << std::endl;
        // std::cout << otherCube << std::endl;
        if(localCube < otherCube)
        {
            return true;
        } else if (localCube > otherCube){
            return false;
        } else {
            //equal cubes?
        }
        return false;
    }

}
