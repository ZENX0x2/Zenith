#pragma once

#include "Core.h"

namespace Zenith 
{
	class ZENITH_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	// To be defined in client
	// 16:31 E5
	Application* CreateApplication();
}

