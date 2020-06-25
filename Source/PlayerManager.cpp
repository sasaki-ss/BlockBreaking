#include "PlayerManager.h"

PlayerManager::PlayerManager() {
	player = new Player(250, 500, 100, 20);
}

PlayerManager::~PlayerManager() {
	delete player;
}

void PlayerManager::Init() {

}

void PlayerManager::Final() {

}

void PlayerManager::Update() {
	player->Update();
}

void PlayerManager::Draw() {
	player->Draw();
}