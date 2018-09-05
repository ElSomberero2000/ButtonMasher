//included libraries
#include <SFML/Graphics.hpp>

//entry point for the program
int main()
{
	//make a variable called gameWindow of type RenderWindow
	sf::RenderWindow gameWindow;
	gameWindow.create(sf::VideoMode::getDesktopMode(), "Button Masher", 
		sf::Style::Titlebar | sf::Style::Close);

	//game loop
	while (gameWindow.isOpen())
	{
		//check for input
		sf::Event gameEvent;
		while (gameWindow.pollEvent(gameEvent))
		{
			//process events

			//check if the event is the closed event
			if (gameEvent.type == sf::Event::Closed)
			{
				gameWindow.close();
			}
		}
		//todo: updatre game state

		//todo: draw graphics

	}
	//exit point for the program
	return 0;
}
