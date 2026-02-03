#pragma once

#include "FoodItem.hpp"

class BowlFoodItem : public FoodItem
{
public:
	BowlFoodItem(int id, int nutrition);

	ItemStack* use(ItemStack* inst, Level* level, Player* player) const override;
};
