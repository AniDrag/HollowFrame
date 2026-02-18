#pragma once
#include "core.h"
namespace HollowFrame {
	class HOLLOWFRAME_API Application
	{
	public:
		Application();
		virtual ~Application();
	
		void Run();
	};
	// To be defined in client
	Application* CreateApp();
}