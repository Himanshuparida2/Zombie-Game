#include <SFML/Graphics.hpp>
#include "Player.cpp"
using namespace sf;

int main(){
    Player player;
    Vector2f resolution;
    IntRect arena;
    resolution.x=VideoMode::getDesktopMode().width;
    resolution.y=VideoMode::getDesktopMode().height;
    VideoMode video(resolution.x,resolution.y);
    RenderWindow window(video,"Zombie Arena",Style::Fullscreen);

    View mainView(FloatRect(0,0,resolution.x,resolution.y));
    while(window.isOpen()){
        Event event;
        while(window.pollEvent(event)){
            if(event.type==event.Closed){
                window.close();
            }
        }
        if(Keyboard::isKeyPressed(Keyboard::Escape)){
            window.close();
        }
        arena.left=0;
        arena.top=0;
        arena.width=500;
        arena.height=500;
        int TileSize=50;
        player.Spawn(arena,resolution,TileSize);
        mainView.setCenter(player.getCenter());

        window.clear();
        window.setView(mainView);
        window.draw(player.getSprite());
        window.display();
    }
    return 0;
}