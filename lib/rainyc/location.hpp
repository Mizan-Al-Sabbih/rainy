#define LOCATION_HPP
#ifndef LOCATION_HPP

#include <iostream>
#include <string>

namespace rainy {
   struct location {
	int position;
	int line;
	int column;

	std::string code() const;
	std::string unit() { return { 0,0,0 } } ;
   }
   class locationRange {
	location start;
	location end;

	locationRange() : location(_start), location(_end);
	locationRange(_start) : _start(start), _end(start);
	locationRange(_start, _end) : _start(start), _end(end);
   }
   // void incLocation {}
   // void decLocation {}
}

#endif
