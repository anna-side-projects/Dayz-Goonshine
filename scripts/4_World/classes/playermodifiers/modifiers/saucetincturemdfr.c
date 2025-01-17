class sauce_TinctureMdfr : sauce_BaseMdfr
{
    float healAmt = 6;   
    override void Init()
    {
        m_ID = blobModifiersGoonshine.MDF_GOONSHINE_TINCTURE;
        DisableActivateCheck();
        m_RegenTime = 10000;
    }


    override void OnTick(PlayerBase player, float deltaT)
    {
        player.AddHealth("GlobalHealth", "Health", (healAmt/1000) * deltaT);
        player.GetTransferValues().ReceiveValue(TransferValues.TYPE_PSI, (healAmt/1000) * deltaT);
    }
}