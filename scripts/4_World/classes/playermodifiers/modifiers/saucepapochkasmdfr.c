class sauce_PapochkaMdfr : sauce_BaseMdfr
{
    float STAT_ADD = 2000; // per second

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
        player.GetStatEnergy().Add((STAT_ADD/1000) * deltaT);
        player.GetStatWater().Add((STAT_ADD/1000) * deltaT);
    }

    override void OnActivate(PlayerBase player, float deltaT)
    {
        NH_CirculatoryItemProfile m_Profile = NH_PlayerCirculatorySystem.GetProfile("Alcohol");
        float maxConcentration = m_Profile.GetConcentrationMax();
        player.GetCirculatorySystem().SetConcentration("Alcohol", maxConcentration);
    }
}