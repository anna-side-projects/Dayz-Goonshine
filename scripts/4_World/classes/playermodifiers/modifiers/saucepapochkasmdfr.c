class sauce_PapochkaMdfr : sauce_BaseMdfr
{
    float STAT_ADD = 2000;

    //todo drunkness
    override void Init()
    {
        m_ID = blobModifiersGoonshine.MDF_GOONSHINE_PAPOCHKA;
        m_RegenTime = 10000;

        DisableActivateCheck();
    }

    override void OnTick(PlayerBase player, float deltaT)
    {
        //todo druuuuuuuuuuuunk
        player.GetStatEnergy().Add(STAT_ADD * deltaT);
        player.GetStatWater().Add(STAT_ADD * deltaT);
    }
}