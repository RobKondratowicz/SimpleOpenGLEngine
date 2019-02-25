#pragma once

#include<string>
#include<fstream>
#include<sstream>
#include<iostream>

#include<glad/glad.h>

class Shader
{
public:
	unsigned int ID;

	Shader(const char* vertPath, const char* fragPath);

	void use();

	void setBool(const std::string &name, bool value) const;
	void setInt(const std::string &name, int value) const;
	void setFloat(const std::string &name, float value) const;
};

