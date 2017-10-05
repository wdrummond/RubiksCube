#include "rubixcube.h"

RubiksCube::RubiksCube () {
	//constructor
	std::vector<std::string> white = {};
	std::vector<std::string> green = {};
	std::vector<std::string> red = {};
	std::vector<std::string> blue = {};
	std::vector<std::string> orange = {};
	std::vector<std::string> yellow = {};
}

int RubiksCube::rotateFace(std::pair <std::string, std::string> params) {
	//rotate a face of the cube.
	//params.first is the color face
	//params.second is the direction either cw or ccw.
	if (params.first == "white" && params.second == "cw") {
		//rotate white clockwise

		std::string temp1 = orange[0];
		std::string temp2 = orange[1];
		std::string temp3 = orange[2];
		std::string temp4 = blue[0];
		std::string temp5 = blue[1];
		std::string temp6 = blue[2];
		std::string temp7 = red[0];
		std::string temp8 = red[1];
		std::string temp9 = red[2];
		std::string temp10 = green[0];
		std::string temp11 = green[1];
		std::string temp12 = green[2];

		blue[0] = temp1;
		blue[1] = temp2;
		blue[2] = temp3;
		red[0] = temp4;
		red[1] = temp5;
		red[2] = temp6;
		green[0] = temp7;
		green[1] = temp8;
		green[2] = temp9;
		orange[0] = temp10;
		orange[1] = temp11;
		orange[2] = temp12;

		std::string tempwhite0 = white[0];
		std::string tempwhite1 = white[1];
		std::string tempwhite2 = white[2];
		std::string tempwhite3 = white[3];
		std::string tempwhite4 = white[4];
		std::string tempwhite5 = white[5];
		std::string tempwhite6 = white[6];
		std::string tempwhite7 = white[7];
		std::string tempwhite8 = white[8];

		white[2] = tempwhite0;
		white[5] = tempwhite1;
		white[8] = tempwhite2;
		white[1] = tempwhite3;
		white[4] = tempwhite4;
		white[7] = tempwhite5;
		white[0] = tempwhite6;
		white[3] = tempwhite7;
		white[6] = tempwhite8;


	}
	if (params.first == "white" && params.second == "ccw") {
		//rotate white counterclockwise

		std::string temp1 = orange[0];
		std::string temp2 = orange[1];
		std::string temp3 = orange[2];
		std::string temp4 = blue[0];
		std::string temp5 = blue[1];
		std::string temp6 = blue[2];
		std::string temp7 = red[0];
		std::string temp8 = red[1];
		std::string temp9 = red[2];
		std::string temp10 = green[0];
		std::string temp11 = green[1];
		std::string temp12 = green[2];

		std::string tempwhite0 = white[0];
		std::string tempwhite1 = white[1];
		std::string tempwhite2 = white[2];
		std::string tempwhite3 = white[3];
		std::string tempwhite4 = white[4];
		std::string tempwhite5 = white[5];
		std::string tempwhite6 = white[6];
		std::string tempwhite7 = white[7];
		std::string tempwhite8 = white[8];

		white[6] = tempwhite0;
		white[3] = tempwhite1;
		white[0] = tempwhite2;
		white[7] = tempwhite3;
		white[4] = tempwhite4;
		white[1] = tempwhite5;
		white[8] = tempwhite6;
		white[5] = tempwhite7;
		white[2] = tempwhite8;

		green[0] = temp1;
		green[1] = temp2;
		green[2] = temp3;
		orange[0] = temp4;
		orange[1] = temp5;
		orange[2] = temp6;
		blue[0] = temp7;
		blue[1] = temp8;
		blue[2] = temp9;
		red[0] = temp10;
		red[1] = temp11;
		red[2] = temp12;
	}
	if (params.first == "green" && params.second == "cw") {
		//rotate green clockwise
		std::string temp1 = orange[2];
		std::string temp2 = orange[5];
		std::string temp3 = orange[8];
		std::string temp4 = yellow[0];
		std::string temp5 = yellow[3];
		std::string temp6 = yellow[6];
		std::string temp7 = red[0];
		std::string temp8 = red[3];
		std::string temp9 = red[6];
		std::string temp10 = white[0];
		std::string temp11 = white[3];
		std::string temp12 = white[6];

		std::string tempface0 = green[0];
		std::string tempface1 = green[1];
		std::string tempface2 = green[2];
		std::string tempface3 = green[3];
		std::string tempface4 = green[4];
		std::string tempface5 = green[5];
		std::string tempface6 = green[6];
		std::string tempface7 = green[7];
		std::string tempface8 = green[8];

		green[2] = tempface0;
		green[5] = tempface1;
		green[8] = tempface2;
		green[1] = tempface3;
		green[4] = tempface4;
		green[7] = tempface5;
		green[0] = tempface6;
		green[3] = tempface7;
		green[6] = tempface8;

		white[6] = temp1;
		white[3] = temp2;
		white[0] = temp3;
		orange[8] = temp4;
		orange[5] = temp5;
		orange[2] = temp6;
		yellow[0] = temp7;
		yellow[3] = temp8;
		yellow[6] = temp9;
		red[0] = temp10;
		red[3] = temp11;
		red[6] = temp12;


	}
	if (params.first == "green" && params.second == "ccw") {
		//rotate green counterclockwise

		std::string temp1 = orange[2];
		std::string temp2 = orange[5];
		std::string temp3 = orange[8];
		std::string temp4 = yellow[0];
		std::string temp5 = yellow[3];
		std::string temp6 = yellow[6];
		std::string temp7 = red[0];
		std::string temp8 = red[3];
		std::string temp9 = red[6];
		std::string temp10 = white[0];
		std::string temp11 = white[3];
		std::string temp12 = white[6];

		std::string tempface0 = green[0];
		std::string tempface1 = green[1];
		std::string tempface2 = green[2];
		std::string tempface3 = green[3];
		std::string tempface4 = green[4];
		std::string tempface5 = green[5];
		std::string tempface6 = green[6];
		std::string tempface7 = green[7];
		std::string tempface8 = green[8];

		green[6] = tempface0;
		green[3] = tempface1;
		green[0] = tempface2;
		green[7] = tempface3;
		green[4] = tempface4;
		green[1] = tempface5;
		green[8] = tempface6;
		green[5] = tempface7;
		green[2] = tempface8;

		yellow[6] = temp1;
		yellow[3] = temp2;
		yellow[0] = temp3;
		red[0] = temp4;
		red[3] = temp5;
		red[6] = temp6;
		white[0] = temp7;
		white[3] = temp8;
		white[6] = temp9;
		orange[8] = temp10;
		orange[5] = temp11;
		orange[2] = temp12;
	}
	if (params.first == "red" && params.second == "cw") {
		//rotate red clockwise

		std::string temp1 = blue[0];
		std::string temp2 = blue[3];
		std::string temp3 = blue[6];
		std::string temp4 = yellow[0];
		std::string temp5 = yellow[1];
		std::string temp6 = yellow[2];
		std::string temp7 = green[2];
		std::string temp8 = green[5];
		std::string temp9 = green[8];
		std::string temp10 = white[6];
		std::string temp11 = white[7];
		std::string temp12 = white[8];

		std::string tempface0 = red[0];
		std::string tempface1 = red[1];
		std::string tempface2 = red[2];
		std::string tempface3 = red[3];
		std::string tempface4 = red[4];
		std::string tempface5 = red[5];
		std::string tempface6 = red[6];
		std::string tempface7 = red[7];
		std::string tempface8 = red[8];

		red[2] = tempface0;
		red[5] = tempface1;
		red[8] = tempface2;
		red[1] = tempface3;
		red[4] = tempface4;
		red[7] = tempface5;
		red[0] = tempface6;
		red[3] = tempface7;
		red[6] = tempface8;

		yellow[2] = temp1;
		yellow[1] = temp2;
		yellow[0] = temp3;
		green[2] = temp4;
		green[5] = temp5;
		green[8] = temp6;
		white[8] = temp7;
		white[7] = temp8;
		white[6] = temp9;
		blue[0] = temp10;
		blue[3] = temp11;
		blue[6] = temp12;
	}
	if (params.first == "red" && params.second == "ccw") {
		//rotate red counterclockwise

		std::string temp1 = blue[0];
		std::string temp2 = blue[3];
		std::string temp3 = blue[6];
		std::string temp4 = yellow[0];
		std::string temp5 = yellow[1];
		std::string temp6 = yellow[2];
		std::string temp7 = green[2];
		std::string temp8 = green[5];
		std::string temp9 = green[8];
		std::string temp10 = white[6];
		std::string temp11 = white[7];
		std::string temp12 = white[8];

		std::string tempface0 = red[0];
		std::string tempface1 = red[1];
		std::string tempface2 = red[2];
		std::string tempface3 = red[3];
		std::string tempface4 = red[4];
		std::string tempface5 = red[5];
		std::string tempface6 = red[6];
		std::string tempface7 = red[7];
		std::string tempface8 = red[8];

		red[6] = tempface0;
		red[3] = tempface1;
		red[0] = tempface2;
		red[7] = tempface3;
		red[4] = tempface4;
		red[1] = tempface5;
		red[8] = tempface6;
		red[5] = tempface7;
		red[2] = tempface8;

		white[6] = temp1;
		white[7] = temp2;
		white[8] = temp3;
		blue[6] = temp4;
		blue[3] = temp5;
		blue[0] = temp6;
		yellow[0] = temp7;
		yellow[1] = temp8;
		yellow[2] = temp9;
		green[8] = temp10;
		green[5] = temp11;
		green[2] = temp12;
	}
	if (params.first == "blue" && params.second == "cw") {
		//rotate blue clockwise

		std::string temp1 = white[2];
		std::string temp2 = white[5];
		std::string temp3 = white[8];
		std::string temp4 = orange[0];
		std::string temp5 = orange[3];
		std::string temp6 = orange[6];
		std::string temp7 = red[2];
		std::string temp8 = red[5];
		std::string temp9 = red[8];
		std::string temp10 = yellow[2];
		std::string temp11 = yellow[5];
		std::string temp12 = yellow[8];

		std::string tempface0 = blue[0];
		std::string tempface1 = blue[1];
		std::string tempface2 = blue[2];
		std::string tempface3 = blue[3];
		std::string tempface4 = blue[4];
		std::string tempface5 = blue[5];
		std::string tempface6 = blue[6];
		std::string tempface7 = blue[7];
		std::string tempface8 = blue[8];

		blue[2] = tempface0;
		blue[5] = tempface1;
		blue[8] = tempface2;
		blue[1] = tempface3;
		blue[4] = tempface4;
		blue[7] = tempface5;
		blue[0] = tempface6;
		blue[3] = tempface7;
		blue[6] = tempface8;

		orange[6] = temp1;
		orange[3] = temp2;
		orange[0] = temp3;
		yellow[8] = temp4;
		yellow[5] = temp5;
		yellow[2] = temp6;
		white[2] = temp7;
		white[5] = temp8;
		white[8] = temp9;
		red[2] = temp10;
		red[5] = temp11;
		red[8] = temp12;
	}
	if (params.first == "blue" && params.second == "ccw") {
		//rotate blue counterclockwise

		std::string temp1 = white[2];
		std::string temp2 = white[5];
		std::string temp3 = white[8];
		std::string temp4 = orange[0];
		std::string temp5 = orange[3];
		std::string temp6 = orange[6];
		std::string temp7 = red[2];
		std::string temp8 = red[5];
		std::string temp9 = red[8];
		std::string temp10 = yellow[2];
		std::string temp11 = yellow[5];
		std::string temp12 = yellow[8];

		std::string tempface0 = blue[0];
		std::string tempface1 = blue[1];
		std::string tempface2 = blue[2];
		std::string tempface3 = blue[3];
		std::string tempface4 = blue[4];
		std::string tempface5 = blue[5];
		std::string tempface6 = blue[6];
		std::string tempface7 = blue[7];
		std::string tempface8 = blue[8];

		blue[6] = tempface0;
		blue[3] = tempface1;
		blue[0] = tempface2;
		blue[7] = tempface3;
		blue[4] = tempface4;
		blue[1] = tempface5;
		blue[8] = tempface6;
		blue[5] = tempface7;
		blue[2] = tempface8;

		red[2] = temp1;
		red[5] = temp2;
		red[8] = temp3;
		white[8] = temp4;
		white[5] = temp5;
		white[2] = temp6;
		yellow[2] = temp7;
		yellow[5] = temp8;
		yellow[8] = temp9;
		orange[6] = temp10;
		orange[3] = temp11;
		orange[0] = temp12;
	}
	if (params.first == "orange" && params.second == "cw") {
		//rotate orange clockwise

		std::string temp1 = blue[2];
		std::string temp2 = blue[5];
		std::string temp3 = blue[8];
		std::string temp4 = yellow[6];
		std::string temp5 = yellow[7];
		std::string temp6 = yellow[8];
		std::string temp7 = green[0];
		std::string temp8 = green[3];
		std::string temp9 = green[6];
		std::string temp10 = white[0];
		std::string temp11 = white[1];
		std::string temp12 = white[2];

		std::string tempface0 = orange[0];
		std::string tempface1 = orange[1];
		std::string tempface2 = orange[2];
		std::string tempface3 = orange[3];
		std::string tempface4 = orange[4];
		std::string tempface5 = orange[5];
		std::string tempface6 = orange[6];
		std::string tempface7 = orange[7];
		std::string tempface8 = orange[8];

		orange[2] = tempface0;
		orange[5] = tempface1;
		orange[8] = tempface2;
		orange[1] = tempface3;
		orange[4] = tempface4;
		orange[7] = tempface5;
		orange[0] = tempface6;
		orange[3] = tempface7;
		orange[6] = tempface8;

		white[0] = temp1;
		white[1] = temp2;
		white[2] = temp3;
		blue[8] = temp4;
		blue[5] = temp5;
		blue[2] = temp6;
		yellow[6] = temp7;
		yellow[7] = temp8;
		yellow[8] = temp9;
		green[6] = temp10;
		green[3] = temp11;
		green[0] = temp12;
	}
	if (params.first == "orange" && params.second == "ccw") {
		//rotate orange counterclockwise

		std::string temp1 = blue[2];
		std::string temp2 = blue[5];
		std::string temp3 = blue[8];
		std::string temp4 = yellow[6];
		std::string temp5 = yellow[7];
		std::string temp6 = yellow[8];
		std::string temp7 = green[0];
		std::string temp8 = green[3];
		std::string temp9 = green[6];
		std::string temp10 = white[0];
		std::string temp11 = white[1];
		std::string temp12 = white[2];

		std::string tempface0 = orange[0];
		std::string tempface1 = orange[1];
		std::string tempface2 = orange[2];
		std::string tempface3 = orange[3];
		std::string tempface4 = orange[4];
		std::string tempface5 = orange[5];
		std::string tempface6 = orange[6];
		std::string tempface7 = orange[7];
		std::string tempface8 = orange[8];

		orange[6] = tempface0;
		orange[3] = tempface1;
		orange[0] = tempface2;
		orange[7] = tempface3;
		orange[4] = tempface4;
		orange[1] = tempface5;
		orange[8] = tempface6;
		orange[5] = tempface7;
		orange[2] = tempface8;

		yellow[8] = temp1;
		yellow[7] = temp2;
		yellow[6] = temp3;
		green[0] = temp4;
		green[3] = temp5;
		green[6] = temp6;
		white[2] = temp7;
		white[1] = temp8;
		white[0] = temp9;
		blue[2] = temp10;
		blue[5] = temp11;
		blue[8] = temp12;
	}
	if (params.first == "yellow" && params.second == "cw") {
		//rotate yellow clockwise

		std::string temp1 = blue[6];
		std::string temp2 = blue[7];
		std::string temp3 = blue[8];
		std::string temp4 = orange[6];
		std::string temp5 = orange[7];
		std::string temp6 = orange[8];
		std::string temp7 = green[6];
		std::string temp8 = green[7];
		std::string temp9 = green[8];
		std::string temp10 = red[6];
		std::string temp11 = red[7];
		std::string temp12 = red[8];

		std::string tempface0 = yellow[0];
		std::string tempface1 = yellow[1];
		std::string tempface2 = yellow[2];
		std::string tempface3 = yellow[3];
		std::string tempface4 = yellow[4];
		std::string tempface5 = yellow[5];
		std::string tempface6 = yellow[6];
		std::string tempface7 = yellow[7];
		std::string tempface8 = yellow[8];

		yellow[2] = tempface0;
		yellow[5] = tempface1;
		yellow[8] = tempface2;
		yellow[1] = tempface3;
		yellow[4] = tempface4;
		yellow[7] = tempface5;
		yellow[0] = tempface6;
		yellow[3] = tempface7;
		yellow[6] = tempface8;

		orange[6] = temp1;
		orange[7] = temp2;
		orange[8] = temp3;
		green[6] = temp4;
		green[7] = temp5;
		green[8] = temp6;
		red[6] = temp7;
		red[7] = temp8;
		red[8] = temp9;
		blue[6] = temp10;
		blue[7] = temp11;
		blue[8] = temp12;
	}
	if (params.first == "yellow" && params.second == "ccw") {
		//rotate yellow counterclockwise

		std::string temp1 = blue[6];
		std::string temp2 = blue[7];
		std::string temp3 = blue[8];
		std::string temp4 = orange[6];
		std::string temp5 = orange[7];
		std::string temp6 = orange[8];
		std::string temp7 = green[6];
		std::string temp8 = green[7];
		std::string temp9 = green[8];
		std::string temp10 = red[6];
		std::string temp11 = red[7];
		std::string temp12 = red[8];

		std::string tempface0 = yellow[0];
		std::string tempface1 = yellow[1];
		std::string tempface2 = yellow[2];
		std::string tempface3 = yellow[3];
		std::string tempface4 = yellow[4];
		std::string tempface5 = yellow[5];
		std::string tempface6 = yellow[6];
		std::string tempface7 = yellow[7];
		std::string tempface8 = yellow[8];

		yellow[6] = tempface0;
		yellow[3] = tempface1;
		yellow[0] = tempface2;
		yellow[7] = tempface3;
		yellow[4] = tempface4;
		yellow[1] = tempface5;
		yellow[8] = tempface6;
		yellow[5] = tempface7;
		yellow[2] = tempface8;

		red[6] = temp1;
		red[7] = temp2;
		red[8] = temp3;
		blue[6] = temp4;
		blue[7] = temp5;
		blue[8] = temp6;
		orange[6] = temp7;
		orange[7] = temp8;
		orange[8] = temp9;
		green[6] = temp10;
		green[7] = temp11;
		green[8] = temp12;
	}

	return 0;
}

//Getters and Setters
const std::vector<std::string>& RubiksCube::getWhite() const {
	return white;
}

const std::vector<std::string>& RubiksCube::getGreen() const {
	return green;
}

const std::vector<std::string>& RubiksCube::getRed() const {
	return red;
}

const std::vector<std::string>& RubiksCube::getBlue() const {
	return blue;
}

const std::vector<std::string>& RubiksCube::getOrange() const {
	return orange;
}

const std::vector<std::string>& RubiksCube::getYellow() const {
	return yellow;
}

void RubiksCube::setWhite(std::string s, std::string s1, std::string s2, 
						  std::string s3, std::string s4, std::string s5, 
						  std::string s6, std::string s7, std::string s8) {
	white.push_back(s);
	white.push_back(s1);
	white.push_back(s2);
	white.push_back(s3);
	white.push_back(s4);
	white.push_back(s5);
	white.push_back(s6);
	white.push_back(s7);
	white.push_back(s8);
}

void RubiksCube::setGreen(std::string s, std::string s1, std::string s2, 
						  std::string s3, std::string s4, std::string s5, 
						  std::string s6, std::string s7, std::string s8) {
	green.push_back(s);
	green.push_back(s1);
	green.push_back(s2);
	green.push_back(s3);
	green.push_back(s4);
	green.push_back(s5);
	green.push_back(s6);
	green.push_back(s7);
	green.push_back(s8);
}

void RubiksCube::setRed(std::string s, std::string s1, std::string s2, 
					    std::string s3, std::string s4, std::string s5, 
					    std::string s6, std::string s7, std::string s8) {
	red.push_back(s);
	red.push_back(s1);
	red.push_back(s2);
	red.push_back(s3);
	red.push_back(s4);
	red.push_back(s5);
	red.push_back(s6);
	red.push_back(s7);
	red.push_back(s8);
}

void RubiksCube::setBlue(std::string s, std::string s1, std::string s2, 
						 std::string s3, std::string s4, std::string s5, 
						 std::string s6, std::string s7, std::string s8) {
	blue.push_back(s);
	blue.push_back(s1);
	blue.push_back(s2);
	blue.push_back(s3);
	blue.push_back(s4);
	blue.push_back(s5);
	blue.push_back(s6);
	blue.push_back(s7);
	blue.push_back(s8);
}

void RubiksCube::setOrange(std::string s, std::string s1, std::string s2, 
						   std::string s3, std::string s4, std::string s5, 
						   std::string s6, std::string s7, std::string s8) {
	orange.push_back(s);
	orange.push_back(s1);
	orange.push_back(s2);
	orange.push_back(s3);
	orange.push_back(s4);
	orange.push_back(s5);
	orange.push_back(s6);
	orange.push_back(s7);
	orange.push_back(s8);
}

void RubiksCube::setYellow(std::string s, std::string s1, std::string s2, 
						   std::string s3, std::string s4, std::string s5, 
						   std::string s6, std::string s7, std::string s8) {
	yellow.push_back(s);
	yellow.push_back(s1);
	yellow.push_back(s2);
	yellow.push_back(s3);
	yellow.push_back(s4);
	yellow.push_back(s5);
	yellow.push_back(s6);
	yellow.push_back(s7);
	yellow.push_back(s8);
}

int getFace(std::string f) {

	return 0;
}

//Overloaded operators
bool RubiksCube::operator==(const RubiksCube& rhs) const {
	std::vector<std::string> otherW = rhs.getWhite();
	std::vector<std::string> otherG = rhs.getGreen();
	std::vector<std::string> otherR = rhs.getRed();
	std::vector<std::string> otherB = rhs.getBlue();
	std::vector<std::string> otherO = rhs.getOrange();
	std::vector<std::string> otherY = rhs.getYellow();


	if (white == otherW && green == otherG && red == otherR && blue == otherB && orange == otherO && yellow == otherY) {
		//std::cout << blue[0] << std::endl;
		//std::cout << otherB[0] << std::endl;

		return true;
	}

	return false;
}

bool RubiksCube::operator<(const RubiksCube& rhs) const {
	return true;
}
