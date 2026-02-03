#pragma once

#include "Item.hpp"

class FoodItem : public Item
{
public:
	FoodItem(int id, int nutrition);
	
	ItemStack* use(ItemStack* inst, Level* level, Player* player) const override;

protected:
	int m_nutrition;
};
