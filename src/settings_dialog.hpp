/*
	Copyright (C) 2003-2014 by David White <davewx7@gmail.com>

	This software is provided 'as-is', without any express or implied
	warranty. In no event will the authors be held liable for any damages
	arising from the use of this software.

	Permission is granted to anyone to use this software for any purpose,
	including commercial applications, and to alter it and redistribute it
	freely, subject to the following restrictions:

	   1. The origin of this software must not be misrepresented; you must not
	   claim that you wrote the original software. If you use this software
	   in a product, an acknowledgement in the product documentation would be
	   appreciated but is not required.

	   2. Altered source versions must be plainly marked as such, and must not be
	   misrepresented as being the original software.

	   3. This notice may not be removed or altered from any source
	   distribution.
*/

#pragma once

#include <SDL2/SDL.h>

#include "gui_section.hpp"

class SettingsDialog
{
public:
	SettingsDialog();
	~SettingsDialog();

	bool handleEvent(const SDL_Event& event); //returns whether the game should be paused
	void draw(bool in_speech_dialog) const;
	void reset();

private:
	bool show_window_;
	bool menu_button_state_;
};
