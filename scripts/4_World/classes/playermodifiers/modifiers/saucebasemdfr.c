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