#pragma once

#ifdef ZT_PLATFORM_WINDOWS

extern Zenith::Application* Zenith::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Zenith::CreateApplication();
	app->Run();
	delete app;
}

#endif	