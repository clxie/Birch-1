#ifndef __BIRCH_LOGGING__
#define __BIRCH_LOGGING__

#include <string>
#include <sstream>
#include <SFML/Graphics.hpp>

#define  LOG(X) std::cout << "[" << __LINE__ << "] " << __PRETTY_FUNCTION__ << " : "  << X << std::endl ;

namespace birch
{
    std::ostream& operator<<(std::ostream&, const sf::Vector2f&);
    std::ostream& operator<<(std::ostream&, const sf::Vector2u&);
    std::ostream& operator<<(std::ostream&, const sf::Color&);

    template <typename T> std::string to_string(const T&);
}

#endif
