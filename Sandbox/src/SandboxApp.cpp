#include <Zenith.h>

class Sandbox : public Zenith::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}

};

Zenith::Application* Zenith::CreateApplication()
{
	return new Sandbox();
}