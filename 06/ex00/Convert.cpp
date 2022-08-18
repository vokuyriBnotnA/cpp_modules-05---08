#include "Convert.hpp"

Convert::Convert() : _int(0), _char(0), _float(0), _double(0){
	return;
}
 
Convert::Convert(Convert & c){
	this->_int = c.getInt();
	this->_char = c.getChar();
	this->_float = c.getFloat();
	this->_double = c.getDouble();
}

Convert::~Convert(){
	return;
}

Convert	&Convert::operator=(const Convert &other){
	this->_char = other.getChar();
	this->_double = other.getDouble();
	this->_float = other.getFloat();
	this->_int = other.getInt();
	this->_is_char = other.getIsChar();
	this->_is_int = other.getIsInt();
	return *this;
}

Convert::Convert(std::string str){
	int i = std::atoi(str.c_str());
	double	d = std::atof(str.c_str());
 
	if (i != 0){
		this->_int = i;
		this->_is_int = 1;
		if(isprint(i)){
			this->_char = static_cast<int>(i);
			this->_is_char = 1;
		}
		else{
			this->_char = 0;
			this->_is_char = 0;
		}
		this->_float = static_cast<float>(d);
		std::cout << d << std::endl;
		this->_double = static_cast<double>(d);
	}
	else if (str.length() == 1 && isprint(str[0]) && str[0] != '0')
	{
		this->_char = str[0];
		this->_is_char = 1;
		this->_int = static_cast<int>(str[0]);
		this->_is_int = 1;
		this->_float = static_cast<float>(str[0]);
		this->_double = static_cast<double>(str[0]);
	}
	else if (d != 0)
	{
		this->_int = 0;
		this->_char = 0;
		this->_is_char = 0;
		this->_is_int = 0;
		this->_float = static_cast<float>(d);
		this->_double = static_cast<double>(d);
	}
	else
	{
		this->_int = 0;
		this->_char = 0;
		this->_is_char = 0;
		this->_is_int = 1;
		this->_float = static_cast<float>(d);
		this->_double = static_cast<double>(d);
	}
}
 
int Convert::getInt() const{
	return(this->_int);
}
 
char Convert::getChar() const{
	return(this->_char);
}
 
float Convert::getFloat() const{
	return(this->_float);
}
 
double Convert::getDouble() const{
	return(this->_double);
}
 
bool Convert::getIsChar() const{
	return (this->_is_char);
}
 
bool Convert::getIsInt() const{
	return (this->_is_int);
}
 
void Convert::printInt() const{
	std::cout << this->_int << std::endl;
}
 
void Convert::printChar() const{
	std::cout << this->_char << std::endl;
}
 
void Convert::printFloat() const{
	if (fmod(this->_float, 1) == 0)
		std::cout << std::fixed << std::setprecision(1) << this->_float << "f" << std::endl;
	else
		std::cout << this->_float << "f" << std::endl;
}
 
void	Convert::printDouble() const
{
	if (fmod(this->_float, 1) == 0)
		std::cout << std::fixed << std::setprecision(1) << this->_double << std::endl;
	else
		std::cout << this->_double << std::endl;
}