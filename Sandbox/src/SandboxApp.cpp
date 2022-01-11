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

int main()
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}