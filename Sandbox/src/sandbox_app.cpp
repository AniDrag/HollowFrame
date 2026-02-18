#include <hollow_frame.h>

class Sandbox : public HollowFrame::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

HollowFrame::Application* HollowFrame::CreateApp() {
	return new Sandbox();
}