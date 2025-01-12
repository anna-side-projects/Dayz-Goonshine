class ActionChugCB : ActionSingleUseBaseCB
{
	private const float QUANTITY_USED_PER_SEC2 = 500;
	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CASingleUseQuantityEdible(QUANTITY_USED_PER_SEC2);
	}
};

class BlobActionChug : ActionConsumeSingle
{
    void BlobActionChug()
    {
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_DRINK;
        m_Text = "Chug";
    }

    override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

    override void OnExecuteServer(ActionData action_data)
    {
        PlayerBase player action_data.m_Player;
        ItemBase item = action_data.m_MainItem;
        Goonshine_Base goonshine = Goonshine_Base.Cast(item);
        
        if(player && goonshine)
        {
            goonshine.Chug();
        }
    }
}