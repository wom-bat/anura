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

#include "Texture.hpp"
#include "Util.hpp"

#include "entity_fwd.hpp"
#include "formula_callable.hpp"
#include "formula_callable_definition.hpp"

class TextureObject : public game_logic::FormulaCallable
{
public:
	explicit TextureObject(KRE::TexturePtr texture);
	KRE::TexturePtr texture() const { return texture_; }
	void setBindingPoint(int binding) { binding_point_ = binding; }
	int getBindingPoint() const { return binding_point_; }
private:
	DECLARE_CALLABLE(TextureObject);
	KRE::TexturePtr texture_;
	int binding_point_;
};

