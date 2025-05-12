#include "Player.h"
Player::Player(){
    m_Texture.loadFromFile("./graphics/player.png");
    m_Sprite.setOrigin(25,25);
}
FloatRect Player::getPosition(){
    return m_Sprite.getGlobalBounds();
}
void Player::Spawn(IntRect arena,Vector2f resolution,int TileSize){
    m_arena.left=arena.left;
    m_arena.top=arena.top;
    m_arena.width=arena.width;
    m_arena.height=arena.height;
    m_resolution.x=resolution.x;
    m_resolution.y=resolution.y;
    m_position.x=arena.width/2;
    m_position.y=arena.height/2;
}
Vector2f Player::getCenter(){
    return m_position;
}
Sprite Player::getSprite(){
    return m_Sprite;
}