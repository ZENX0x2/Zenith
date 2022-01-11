#pragma once

#ifdef ZT_PLATFORM_WINDOWS

extern Zenith::Application* Zenith::CreateApplication();

int main(int argc, char** argv)
{
	
	sandbox->Run();
	delete sandbox;
}

#endif	