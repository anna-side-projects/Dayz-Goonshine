class sauce_RebelJuiceMdfr : sauce_BaseMdfr
{
    override void Init()
    {
        m_ID = blobModifiersGoonshine.MDF_GOONSHINE_REBEL;
        DisableActivateCheck();

        m_RegenTime = 10000;
    }

    override void OnActivate(PlayerBase player)
    {
        super.OnActivate(player);
        player.m_ShockHandler.SetShock(-50);
        player.GetModifiersManager().ActivateModifier(eModifiers.MDF_MORPHINE);
    }

    override void OnDeactivate(PlayerBase player)
    {
        player.GetModifiersManager().ActivateModifier(eModifiers.MDF_MORPHINE);
    }

}