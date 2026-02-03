#include "FoodItem.hpp"
#include "world/entity/Player.hpp"

FoodItem::FoodItem(int id, int nutrition) : Item(id), m_nutrition(nutrition)
{
	m_maxStackSize = 1;
}

ItemStack* FoodItem::use(ItemStack* inst, Level* level, Player* player) const
{
    if (player->m_health < 20)
    {
        --inst->m_count;
        player->heal(m_nutrition);
    }
    return inst;
}