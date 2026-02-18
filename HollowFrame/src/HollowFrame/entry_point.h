#pragma once

#ifdef HF_PLATFORM_WINDOWS

extern HollowFrame::Application* HollowFrame::CreateApp(); // client side

int main(int argc, char** argv) {
	//printf("Engine activated");
	auto app = HollowFrame::CreateApp();
	app->Run();
	delete app;
}
#else
#error Supports only windows! error from entery_point.h
#endif
