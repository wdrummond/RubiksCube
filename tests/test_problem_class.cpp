#include "rubixcube.h"
#include "state.h"
#include "action.h"
#include "problem.h"
#include "gtest/gtest.h"

#include <string>


TEST(Actions, actionCount) {
  /* Setup */
  std::vector<std::string> colors = {"white", "white", "white", "white", "white", "white", "white", "white", "white",
  									 "green", "green", "green", "green", "green", "green", "green", "green", "green",
                     				 "red", "red", "red", "red", "red", "red", "red", "red", "red",
  									 "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue",
  									 "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange",
  									 "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow"};
  wsd::State s(colors);
  wsd::Problem p(&s);
  bool expected_result = true;
  bool result = false;
  
  /* Stimulus */
  std::vector<ai::Search::Action *> res = p.Actions(&s);
  if(res.size() == 12) {
    result = true;
  }
  
  /* Comparison */
  EXPECT_EQ( expected_result, result );
}

TEST(Actions, actionCountBad) {
  /* Setup */
  std::vector<std::string> colors = {"white", "white", "white", "white", "white", "white", "white", "white", "white",
  									 "green", "green", "green", "green", "green", "green", "green", "green", "green",
                     				 "red", "red", "red", "red", "red", "red", "red", "red", "red",
  									 "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue",
  									 "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange",
  									 "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow"};
  wsd::State s(colors);
  wsd::Problem p(&s);
  bool expected_result = true;
  bool result = true;
  
  /* Stimulus */
  std::vector<ai::Search::Action *> res = p.Actions(&s);
  if(res.size() != 12) {
    result = false;
  }
  
  /* Comparison */
  EXPECT_EQ( expected_result, result );
}

TEST(StepCost, countingSteps) {
  /* Setup */
  std::string x = "red";
  std::string r = "cw";
  wsd::Action a(x,r);

  std::vector<std::string> colors = {"white", "white", "white", "white", "white", "white", "white", "white", "white",
  									 "green", "green", "green", "green", "green", "green", "green", "green", "green",
                     				 "red", "red", "red", "red", "red", "red", "red", "red", "red",
  									 "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue",
  									 "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange",
  									 "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow"};
  wsd::State s(colors);
  wsd::Problem p(&s);
  bool expected_result = true;
  bool result = false;
  
  /* Stimulus */
  double res = p.StepCost(&s, &a, &s);
  if(res == 1.0) {
    result = true;
  }
  
  /* Comparison */
  EXPECT_EQ( expected_result, result );
}

TEST(GoalTest, goalTestGood) {
  /* Setup */
  std::vector<std::string> colors = {"white", "white", "white", "white", "white", "white", "white", "white", "white",
  									 "green", "green", "green", "green", "green", "green", "green", "green", "green",
                     				 "red", "red", "red", "red", "red", "red", "red", "red", "red",
  									 "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue",
  									 "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange",
  									 "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow"};
  wsd::State *s= new wsd::State(colors);
  wsd::Problem p(s);
  bool expected_result = true;
  
  /* Stimulus */
  bool result = p.GoalTest(s);
  
  /* Comparison */
  EXPECT_EQ( expected_result, result );
}

TEST(GoalTest, goalTestBad) {
  /* Setup */
  std::vector<std::string> colors = {"red", "white", "white", "white", "white", "white", "white", "white", "white",
  									 "green", "green", "green", "green", "green", "green", "pink", "green", "green",
                     				 "red", "red", "red", "red", "red", "white", "red", "red", "red",
  									 "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue",
  									 "orange", "orange", "orange", "yellow", "orange", "orange", "orange", "orange", "orange",
  									 "yellow", "yellow", "yellow", "orange", "yellow", "yellow", "yellow", "yellow", "yellow"};
  wsd::State s(colors);
  wsd::Problem p(&s);
  bool expected_result = false;
  
  /* Stimulus */
  bool result = p.GoalTest(&s);
  
  /* Comparison */
  EXPECT_EQ( expected_result, result );
}

TEST(Result, ResultGood) {
  /* Setup */
  std::vector<std::string> colors = {"white", "white", "white", "white", "white", "white", "white", "white", "white",
                                     "green", "green", "green", "green", "green", "green", "green", "green", "green",
                                     "red", "red", "red", "red", "red", "red", "red", "red", "red",
                                     "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue",
                                     "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange",
                                     "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow"};
  wsd::State *s = new wsd::State(colors);

  //a clockwise turn of the white face
  std::vector<std::string> colors2 = {"white", "white", "white", "white", "white", "white", "white", "white", "white",
                     				  "red", "red", "red", "green", "green", "green", "green", "green", "green",
                     				  "blue", "blue", "blue", "red", "red", "red", "red", "red", "red",
                     				  "orange", "orange", "orange", "blue", "blue", "blue", "blue", "blue", "blue",
                     				  "green", "green", "green", "orange", "orange", "orange", "orange", "orange", "orange",
                     				  "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow"};
  wsd::State *s2 = new wsd::State(colors2);

  std::string f = "white";
  std::string r = "cw";
  wsd::Action *a = new wsd::Action(f,r);

  wsd::Problem p(s);
  bool expected_result = true;
  bool result = false;
  
  /* Stimulus */
  wsd::State* resultingState = dynamic_cast<wsd::State *> (p.Result(s, a));
  if( resultingState->IsEqual(s2)) {
  		result = true;
  }
  
  /* Comparison */
  EXPECT_EQ( expected_result, result );
}

TEST(Result, ResultBad) {
  /* Setup */
  std::vector<std::string> colors = {"white", "white", "white", "white", "white", "white", "white", "white", "white",
                                     "green", "green", "green", "green", "green", "green", "green", "green", "green",
                                     "red", "red", "red", "red", "red", "red", "red", "red", "red",
                                     "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue",
                                     "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange",
                                     "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow"};
  wsd::State *s = new wsd::State(colors);

  //a clockwise turn of the white face
  std::vector<std::string> colors2 = {"white", "white", "white", "white", "white", "white", "white", "white", "white",
                              "orange", "orange", "orange", "green", "green", "green", "green", "green", "green",
                              "green", "green", "green", "red", "red", "red", "red", "red", "red",
                              "red", "red", "red", "blue", "blue", "blue", "blue", "blue", "blue",
                              "blue", "blue", "blue", "orange", "orange", "orange", "orange", "orange", "orange",
                              "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow"};
  wsd::State *s2 = new wsd::State(colors2);

  std::string f = "white";
  std::string r = "cw";
  wsd::Action *a = new wsd::Action(f,r);

  wsd::Problem p(s);
  bool expected_result = false;
  bool result = false;
  
  /* Stimulus */
  wsd::State* resultingState = dynamic_cast<wsd::State *> (p.Result(s, a));
  if( resultingState->IsEqual(s2)) {
      result = true;
  }
  
  /* Comparison */
  EXPECT_EQ( expected_result, result );
}
