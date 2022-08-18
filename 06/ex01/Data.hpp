#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data {
public:
	~Data();

	Data(std::string const &str);
	Data();
	Data(Data &c);
	Data &operator=(const Data &other);
	std::string getSer() const;
private:
	std::string _ser;
};

#endif  