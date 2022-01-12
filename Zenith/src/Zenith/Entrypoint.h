#pragma once

#ifdef ZT_PLATFORM_WINDOWS

extern Zenith::Application* Zenith::CreateApplication();

int main(int argc, char** argv)
{
	Zenith::Log::Init();
	ZT_CORE_WARN("Core Log Init");
	ZT_INFO("Client Log Init");

	auto app = Zenith::CreateApplication();
	app->Run();
	delete app;
}

#endif	