#include "BowlFoodItem.hpp"

BowlFoodItem::BowlFoodItem(int id, int nutrition) : FoodItem(id, nutrition)
{
}

ItemStack* BowlFoodItem::use(ItemStack* inst, Level* level, Player* player) const
{
    FoodItem::use(inst, level, player);
    return new ItemStack(Item::bowl);
}