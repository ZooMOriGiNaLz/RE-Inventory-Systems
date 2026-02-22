#include "RE4Inventory.h"

void RE4Inventory::Render()
{
	DrawRectangle(position.x, position.y, 600, 350, Color{0, 0, 0, 150});
}

void RE4Inventory::OpenInventory()
{

}

void RE4Inventory::CloseInventory()
{

}

void RE4Inventory::SetPosition(float x, float y)
{
	position.x = x;
	position.y = y;
}
