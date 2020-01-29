#include "Game.h"


namespace GameDev2D
{
	Game::Game()
	{
        LoadTexture("Assets");

        m_Space = new SpriteAtlas("Assets");
        m_Space->UseFrame("Background");
        m_Space->SetScale(Vector2(2.0f, 2.0f));

        m_Earth = new SpriteAtlas("Assets");
        m_Earth->UseFrame("Earth");
        m_Earth->SetAnchor(Vector2(0.5f, 0.5f));
        m_Earth->SetPosition(Vector2(300.0f, 300.0f));

        m_Mars = new SpriteAtlas("Assets");
        m_Mars->UseFrame("Mars");
        m_Mars->SetAnchor(Vector2(0.5f, 0.5f));
        m_Mars->SetPosition(Vector2(200.0f, 250.0f));        

        m_Mercury = new SpriteAtlas("Assets");
        m_Mercury->UseFrame("Mercury");
        m_Mercury->SetAnchor(Vector2(0.5f, 0.5f));
        m_Mercury->SetPosition(Vector2(480.0f, 400.0f));

        m_Sun = new SpriteAtlas("Assets");
        m_Sun->UseFrame("Sun");
        m_Sun->SetAnchor(Vector2(0.5f, 0.05f));
        m_Sun->SetPosition(Vector2(600.0f, 350.0f));

        m_Venus = new SpriteAtlas("Assets");
        m_Venus->UseFrame("Venus");
        m_Venus->SetAnchor(Vector2(0.5f, 0.5f));
        m_Venus->SetPosition(Vector2(400.0f, 300.0f));
	}

	Game::~Game()
	{
        SafeDelete(m_Earth);
        UnloadTexture("Earth");

        SafeDelete(m_Mars);
        UnloadTexture("Mars");

        SafeDelete(m_Space);
        UnloadTexture("Background");

        SafeDelete(m_Mercury);
        UnloadTexture("Mercury");

        SafeDelete(m_Sun);
        UnloadTexture("Sun");

        SafeDelete(m_Venus);
        UnloadTexture("Venus");
	}

	void Game::Update(double delta)
	{
		
	}

	void Game::Draw()
	{
        m_Space->Draw();
        m_Venus->Draw();
        m_Earth->Draw();
        m_Mars->Draw();
        m_Mercury->Draw();
        m_Sun->Draw();
        
	}

	void Game::HandleLeftMouseClick(float aMouseX, float aMouseY)
	{

	}

	void Game::HandleRightMouseClick(float aMouseX, float aMouseY)
	{

	}

	void Game::HandleMouseMove(float aMouseX, float aMouseY, float aPreviousX, float aPreviousY)
	{
		
	}

	void Game::HandleKeyPress(Keyboard::Key aKey)
	{

	}

	void Game::HandleKeyReleased(Keyboard::Key key)
	{

	}
}