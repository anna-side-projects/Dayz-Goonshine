class Goonshine_Base : Inventory_Base
{
    int modifierId;
    void Chug(PlayerBase player)
    {
        player.GetModifiersManager().ActivateModifier(modifierId);
    }
}