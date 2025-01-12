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
        player.m_ShockHandler.SetShock(-50);

        //todo add morphien effect
    }

    override void OnDeactivate(PlayerBase player)
    {
        //todo remove morphine effect
    }

}