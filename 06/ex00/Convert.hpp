#ifndef CONVERT_HPP
#define CONVERT_HPP
 
#include <iostream>
#include <iomanip>
#include <tgmath.h>
 
class Convert{
	public:
		Convert();
		~Convert();
	
		Convert(Convert & c);
		Convert(std::string str);
		Convert	&operator=(const Convert &other);
		int getInt()const;
		char getChar() const;
		float getFloat() const;
		double getDouble() const;
		bool getIsChar() const;
		bool getIsInt() const;
		void printInt() const;
		void printChar() const;
		void printFloat() const;
		void printDouble() const;
	
	private:
		int _int;
		char _char;
		float _float;
		double _double;
		bool _is_int;
		bool _is_char;
};
 
#endif