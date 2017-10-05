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

//test Action class
TEST(GetFace, faceGetting) {
  /* Setup */
  std::string x = "red";
  std::string r = "cw";
  wsd::Action a(x,r);
  bool expected_result = true;
  bool result = false;
  
  /* Stimulus */
  std::string res = a.GetFace();
  if(res == "red") {
    result = true;
  }
  
  /* Comparison */
  EXPECT_EQ( expected_result, result );
}

TEST(GetFace, faceGettingBad) {
  /* Setup */
  std::string x = "red";
  std::string r = "cw";
  wsd::Action a(x,r);
  bool expected_result = false;
  bool result = false;
  
  /* Stimulus */
  std::string res = a.GetFace();
  if(res == "cw") {
    result = true;
  }
  
  /* Comparison */
  EXPECT_EQ( expected_result, result );
}

TEST(GetRotation, rotationGetting) {
  /* Setup */
  std::string x = "red";
  std::string r = "cw";
  wsd::Action a(x,r);
  bool expected_result = true;
  bool result = false;
  
  /* Stimulus */ 
  std::string res = a.GetRotation();
  if(res == "cw") {
    result = true;
  }
  
  /* Comparison */
  EXPECT_EQ( expected_result, result );
}

TEST(GetRotation, rotationGettingBad) {
  /* Setup */
  std::string x = "red";
  std::string r = "cw";
  wsd::Action a(x,r);
  bool expected_result = false;
  bool result = false;
  
  /* Stimulus */ 
  std::string res = a.GetRotation();
  if(res == "red") {
    result = true;
  }
  
  /* Comparison */
  EXPECT_EQ( expected_result, result );
}
