#include <SFML/Graphics.hpp>
using namespace sf;
class Player{
    Texture m_Texture;
    Sprite m_Sprite;
    Vector2f m_resolution;
    Vector2f m_position;
    IntRect m_arena;
    int m_TileSize;
    public:
        Player();
        FloatRect getPosition();
        void Spawn(IntRect arena,Vector2f resolution,int TileSize);
        Vector2f getCenter();
        Sprite getSprite();
};