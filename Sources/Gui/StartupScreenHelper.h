/*
 Copyright (c) 2013 yvt
 
 This file is part of OpenSpades.
 
 OpenSpades is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 OpenSpades is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with OpenSpades.  If not, see <http://www.gnu.org/licenses/>.
 
 */

#pragma once

#include <Core/RefCountedObject.h>
#include <vector>
#include <Core/Mutex.h>
#include <ScriptBindings/ScriptManager.h>
#include <AngelScript/addons/scriptarray.h>

namespace spades {
	class Serveritem;
	namespace gui {
		class StartupScreen;
		class StartupScreenHelper: public RefCountedObject {
			friend class StartupScreen;
			StartupScreen *scr;
		protected:
			virtual ~StartupScreenHelper();
		public:
			StartupScreenHelper(StartupScreen *scr);
			void StartupScreenDestroyed();
			
			void Start();
		};
	}
}