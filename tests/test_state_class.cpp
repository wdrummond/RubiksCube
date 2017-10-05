#include "rubixcube.h"
#include "state.h"
#include "action.h"
#include "problem.h"
#include "gtest/gtest.h"

#include <string>

// TEST(isOdd, findsOdd) {
//   /* Setup */
//   int x = 19;
//   bool expected_result = true;
  
//    Stimulus 
//   bool result = cgl::isOdd( x );
  
//   /* Comparison */
//   EXPECT_EQ( expected_result, result );
// }

//test State class
TEST(IsEqual, equalCubes) {
  /* Setup */
  std::vector<std::string> colors = {"white", "white", "white", "white", "white", "white", "white", "white", "white",
  									 "green", "green", "green", "green", "green", "green", "green", "green", "green",
                     "red", "red", "red", "red", "red", "red", "red", "red", "red",
  									 "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue",
  									 "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange",
  									 "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow"};
  wsd::State s(colors);
  bool expected_result = true;
  
  /* Stimulus */
  bool result = s.IsEqual(&s);

  /* Comparison */
  EXPECT_EQ( expected_result, result );
}

TEST(IsEqual, notEqualCubes) {
  /* Setup */
  std::vector<std::string> colors = {"white", "white", "white", "white", "white", "white", "white", "white", "white",
                     "green", "green", "green", "green", "green", "green", "green", "green", "green",
                     "red", "red", "red", "red", "red", "red", "red", "red", "red",
                     "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue",
                     "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange",
                     "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow"};

  std::vector<std::string> colors2 = {"white", "white", "white", "white", "white", "white", "white", "white", "white",
                     "red", "red", "red", "green", "green", "green", "green", "green", "green",
                     "blue", "blue", "blue", "red", "red", "red", "red", "red", "red",
                     "orange", "orange", "orange", "blue", "blue", "blue", "blue", "blue", "blue",
                     "green", "green", "green", "orange", "orange", "orange", "orange", "orange", "orange",
                     "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow"};
  wsd::State s(colors);
  wsd::State s2(colors2);
  bool expected_result = false;
  
  /* Stimulus */
  bool result = s.IsEqual(&s2);

  /* Comparison */
  EXPECT_EQ( expected_result, result );
}

TEST(IsLessThan, IsLessThan) {
  /* Setup */
  std::vector<std::string> colors = {"white", "white", "white", "white", "white", "white", "white", "white", "white",
                     "green", "green", "green", "green", "green", "green", "green", "green", "green",
                     "red", "red", "red", "red", "red", "red", "red", "red", "red",
                     "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue", "blue",
                     "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange", "orange",
                     "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow"};

  std::vector<std::string> colors2 = {"white", "white", "white", "white", "white", "white", "white", "white", "white",
                     "red", "red", "red", "green", "green", "green", "green", "green", "green",
                     "blue", "blue", "blue", "red", "red", "red", "red", "red", "red",
                     "orange", "orange", "orange", "blue", "blue", "blue", "blue", "blue", "blue",
                     "green", "green", "green", "orange", "orange", "orange", "orange", "orange", "orange",
                     "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow", "yellow"};
  wsd::State s(colors);
  wsd::State s2(colors2);
  bool expected_result = true;
  
  /* Stimulus */
  bool result = s.IsLessThan(&s2);

  /* Comparison */
  EXPECT_EQ( expected_result, result );
}