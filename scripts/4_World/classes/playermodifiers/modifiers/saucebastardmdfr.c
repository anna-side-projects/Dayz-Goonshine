class sauce_BastardMdfr : sauce_BaseMdfr
{
    float damage = 1; //damage per second
    override void Init()
    {
        m_ID = blobModifiersGoonshine.MDF_GOONSHINE_BASTARD;
        
        DisableActivateCheck();

        m_RegenTime = 30000; //time in ms
    }

    override void OnTick(PlayerBase player, float deltaT)
    {
        player.AddHealth("GlobalHealth", "Health", -(damage * deltaT))
    }

    override void OnActivate(PlayerBase player)
    {
        player.GetTransferValues().ReceiveValue(TransferValues.TYPE_RADX, -1000);
    }
}