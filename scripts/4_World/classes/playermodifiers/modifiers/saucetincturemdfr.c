class sauce_TinctureMdfr : sauce_BaseMdfr
{
    
    override void Init()
    {
        m_ID = blobModifiersGoonshine.MDF_GOONSHINE_TINCTURE;
        DisableActivateCheck();
        m_RegenTime = 10000;
    }

    override void OnTick(PlayerBase player, float deltaT)
    {
        //todo the stuff
    }
}