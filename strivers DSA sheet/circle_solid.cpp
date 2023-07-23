#include <SFML/Graphics.h>

int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "Circle"); // create window
    window.setFramerateLimit(60); // set frame rate limit

    sf::CircleShape circle(100); // create circle shape
    circle.setFillColor(sf::Color::Red); // set fill color to red
    circle.setPosition(150, 150); // set position to (150, 150)

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear(); // clear window
        window.draw(circle); // draw circle
        window.display(); // display window
    }

    return 0;
}
