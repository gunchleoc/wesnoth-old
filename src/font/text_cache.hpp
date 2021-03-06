/*
   Copyright (C) 2016 by Chris Beck<render787@gmail.com>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/

/**
 * Note: Specific to sdl_ttf
 */

#ifndef FONT_TEXT_CACHE_HPP
#define FONT_TEXT_CACHE_HPP

#include "text_surface.hpp"

#include <list>

namespace font {

class text_cache
{
public:
	static text_surface &find(text_surface const &t);
	static void resize(unsigned int size);
private:
	typedef std::list< text_surface > text_list;
	static text_list cache_;
	static unsigned int max_size_;
};

} // end namespace font

#endif
