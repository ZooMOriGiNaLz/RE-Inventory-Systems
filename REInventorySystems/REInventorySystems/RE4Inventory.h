#pragma once
#include "raylib.h"
#include <vector>


class RE4Inventory
{
public:
	// Render the inventory.
	void Render();
	// Open and close inventory.
	void OpenInventory();
	void CloseInventory();
	// Positioning
	void SetPosition(float x, float y);
private:
	bool inventoryOpen = false;
	Vector2 position{};
};

