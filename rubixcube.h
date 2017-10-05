#ifndef _RUBIXCUBE_H_
#define _RUBIXCUBE_H_

#include <cstring>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

// struct Face {
// 	std::vector<std::string> v(9);
// }

class RubiksCube {
public:
	RubiksCube();
	int getFace(std::string f);
	void setWhite(std::string s, std::string s1, std::string s2, std::string s3, std::string s4, std::string s5, std::string s6, std::string s7, std::string s8);
	void setGreen(std::string s, std::string s1, std::string s2, std::string s3, std::string s4, std::string s5, std::string s6, std::string s7, std::string s8);
	void setRed(std::string s, std::string s1, std::string s2, std::string s3, std::string s4, std::string s5, std::string s6, std::string s7, std::string s8);
	void setBlue(std::string s, std::string s1, std::string s2, std::string s3, std::string s4, std::string s5, std::string s6, std::string s7, std::string s8);
	void setOrange(std::string s, std::string s1, std::string s2, std::string s3, std::string s4, std::string s5, std::string s6, std::string s7, std::string s8);
	void setYellow(std::string s, std::string s1, std::string s2, std::string s3, std::string s4, std::string s5, std::string s6, std::string s7, std::string s8);

	const std::vector<std::string>& getWhite() const;
	const std::vector<std::string>& getGreen() const;
	const std::vector<std::string>& getRed() const;
	const std::vector<std::string>& getBlue() const;
	const std::vector<std::string>& getOrange() const;
	const std::vector<std::string>& getYellow() const;

	int rotateFace(std::pair <std::string, std::string> params);

	bool operator==(const RubiksCube& rhs) const;
	bool operator<(const RubiksCube& rhs) const;

private:
	std::vector<std::string> white;
	std::vector<std::string> green;
	std::vector<std::string> red;
	std::vector<std::string> blue;
	std::vector<std::string> orange;
	std::vector<std::string> yellow;
	//
	

protected:
	//
};

#endif