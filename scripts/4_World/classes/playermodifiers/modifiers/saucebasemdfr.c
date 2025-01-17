class sauce_BaseMdfr : ModifierBase
{
    float m_RegenTime;
    override void Init()
    {
        m_TickIntervalActive = 3;
        m_TickerIntervalInactive = DEFAULT_TICK_TIME_INACTIVE;
        m_TrackActivatedTime = true;
        m_AnalyticsStatsEnable = true;
        m_IsPersistent = true;
        
        DisableActivateCheck();
    }

    override void OnActivate(PlayerBase player)
    {
        NH_CirculatoryItemProfile m_Profile = NH_PlayerCirculatorySystem.GetProfile("Alcohol");
        float maxConcentration = m_Profile.GetConcentrationMax();
        player.GetCirculatorySystem().SetConcentration("Alcohol", maxConcentration/2);
    }
    override bool ActivateCondition(PlayerBase player)
    {
        return true;
    }
    override bool DeactivateCondition(PlayerBase player)
    {
        float attachedTime = GetAttachedTime();
        if(attachedTime >= m_RegenTime)
            return true;
        return false;
    }
}