#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Team Fortress 2");
    
    sf::Texture coconutTexture;
    coconutTexture.loadFromFile("Coconut.png");

    sf::Sprite coconut(coconutTexture);

    sf::Vector2u textureSize = coconutTexture.getSize();

    coconut.setScale(400.f / textureSize.x, 400.f / textureSize.y);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(coconut);
        window.display();
    }

    return 0;
}