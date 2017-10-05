#include <fstream>
#include <iostream>
#include <typeinfo>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include "cstdlib"
#include "rubixcube.h"
#include "state.h"
#include "action.h"
#include "problem.h"

std::vector<std::string> makeCube(std::vector<std::string> colors) {
	//std::vector<std::string> colors;
	for (int i=0; i<54;i++)
	{
		std::string word;
    	std::cin >> word;           //input from the file test.txt
    	colors.push_back(word);
	}

    // cube.setWhite(colors[0], colors[1], colors[2], colors[3], colors[4], colors[5], colors[6], colors[7], colors[8]);
    // cube.setGreen(colors[9], colors[10], colors[11], colors[12], colors[13], colors[14], colors[15], colors[16], colors[17]);
    // cube.setRed(colors[18], colors[19], colors[20], colors[21], colors[22], colors[23], colors[24], colors[25], colors[26]);
    // cube.setBlue(colors[27], colors[28], colors[29], colors[30], colors[31], colors[32], colors[33], colors[34], colors[35]);
    // cube.setOrange(colors[36], colors[37], colors[38], colors[39], colors[40], colors[41], colors[42], colors[43], colors[44]);
    // cube.setYellow(colors[45], colors[46], colors[47], colors[48], colors[49], colors[50], colors[51], colors[52], colors[53]);

	return colors;
}

int rotateCube(RubiksCube &cube) {
    std::string word;
    std::cin >> word;
    if (word == "done") {
        return 0;
    }
    std::pair <std::string, std::string> params;
    params.first = word;
    //std::cout<< word << " ";
    std::cin >> word;
    if (word == "done") {
        return 0;
    }
    params.second = word;
    //std::cout << word << "\n";

    cube.rotateFace(params);

    return 0;
}

int main(int argc, char* argv[]) {

	std::cout << "Here we go!" << std::endl;

	//RubiksCube cube = RubiksCube();
	std::vector<std::string> colors;

	std::ifstream in("../../../cs4300-code-ai-agents/prog/RubiksCube/shuffled_cubes_to_solve/solve_me_4140.in");
    std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
    std::cin.rdbuf(in.rdbuf()); //redirect std::cin to test.txt!

    std::ofstream out("out.txt");
    std::streambuf *coutbuf = std::cout.rdbuf(); //save old buf
    std::cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!

    std::string word;
    while(std::cin >> word)
    {           
        if (word == "initial") {
        	colors = makeCube(colors);
        }

        // std::cin.rdbuf(cinbuf);   //reset to standard input again
        // std::string input;
        // std::cout << "Your command:";
        // std::cin >> input;

        // std::cout << input << std::endl;
        
        wsd::State   *state   = new wsd::State(colors);
    	wsd::Problem *problem = new wsd::Problem((ai::Search::State *)state);

        ai::Search::Frontier *fringe  = new ai::Search::BFFrontier;
 		ai::Search::Tree *search = new ai::Search::Tree(problem, fringe);

 		search->SetGenerationLimit(2000000); //(GB *(amount of GBs) /statesize)
 		search->SetStoreLimit(2000000);

 		if(search->Search())
 		{
 			std::list<ai::Search::Node *> *solution = search->GetSolution().GetList();
 			std::list<ai::Search::Node *>::const_iterator it;

 			for(it = solution->begin(); it != solution->end(); it++)
 			{
 				if((*it)->GetAction())
            	{
            		(*it)->GetAction()->Display();
            	}
          		if((*it)->GetState())
            	{
            		(*it)->GetState()->Display();
            	}
        	}
      		std::cout << "Path Cost: " << solution->back()->GetPathCost() << std::endl;

      		// std::cout << "Nodes generated: " << search->GetNumberNodesGenerated() << std::endl;
      		// std::cout << "Nodes stored:    " << search->GetMaxNodesStored() << std::endl;
      
     		 /*
        		it = solution->begin();
        		cgl::RectState *state_ptr = (cgl::RectState *)((*it)->GetState());
        		state_ptr->Display();
        		std::cout << std::endl;
      		 */
    	}

    	std::cout << "Nodes generated: " << search->GetNumberNodesGenerated() << std::endl;
      	std::cout << "Nodes stored:    " << search->GetMaxNodesStored() << std::endl;

      	std::cout << sizeof(RubiksCube)<< std::endl;
      	std::cout << sizeof(wsd::State)<< std::endl;
      	std::cout << sizeof(wsd::Action)<< std::endl;
      	std::cout << sizeof(std::string)<< std::endl;
      	std::cout << sizeof(std::vector<std::string>)<< std::endl;

  		delete search;

        /*if (word == "rotate") {
            rotateCube(cube);
        }

        if (word == "show") {
            std::vector<std::string> white = cube.getWhite();
            std::vector<std::string> green = cube.getGreen();
            std::vector<std::string> red = cube.getRed();
            std::vector<std::string> blue = cube.getBlue();
            std::vector<std::string> orange = cube.getOrange();
            std::vector<std::string> yellow = cube.getYellow();

            std::cout << white[0] << " " << white[1] << " " << white[2] << "\n";
            std::cout << white[3] << " " << white[4] << " " << white[5] << "\n";
            std::cout << white[6] << " " << white[7] << " " << white[8] << "\n";

            std::cout << "\n";

            std::cout << green[0] << " " << green[1] << " " << green[2] << "\n";
            std::cout << green[3] << " " << green[4] << " " << green[5] << "\n";
            std::cout << green[6] << " " << green[7] << " " << green[8] << "\n";

            std::cout << "\n";

            std::cout << red[0] << " " << red[1] << " " << red[2] << "\n";
            std::cout << red[3] << " " << red[4] << " " << red[5] << "\n";
            std::cout << red[6] << " " << red[7] << " " << red[8] << "\n";

            std::cout << "\n";

            std::cout << blue[0] << " " << blue[1] << " " << blue[2] << "\n";
            std::cout << blue[3] << " " << blue[4] << " " << blue[5] << "\n";
            std::cout << blue[6] << " " << blue[7] << " " << blue[8] << "\n";

            std::cout << "\n";

            std::cout << orange[0] << " " << orange[1] << " " << orange[2] << "\n";
            std::cout << orange[3] << " " << orange[4] << " " << orange[5] << "\n";
            std::cout << orange[6] << " " << orange[7] << " " << orange[8] << "\n";

            std::cout << "\n";

            std::cout << yellow[0] << " " << yellow[1] << " " << yellow[2] << "\n";
            std::cout << yellow[3] << " " << yellow[4] << " " << yellow[5] << "\n";
            std::cout << yellow[6] << " " << yellow[7] << " " << yellow[8] << "\n";

            std::cout << "\n";

        }

        if (word == "isequal") {
            RubiksCube cubeT = RubiksCube();
            makeCube(cubeT);

            if (cube == cubeT) {
            	std::cout << "TRUE" << "\n";
            }
            else {
            	std::cout << "FALSE" << "\n";
            }

        }*/
    }

    //std::cin >> word;           //input from the file test.txt
    //std::cout << word << "  ";  //output to the file out.txt

    std::cin.rdbuf(cinbuf);   //reset to standard input again
    std::cout.rdbuf(coutbuf); //reset to standard output again

    // std::cin >> word;   //input from the standard input
    // std::cout << word;  //output to the standard input

    std::cout << "And We're Back!!" << std::endl;

	return 0;
}
