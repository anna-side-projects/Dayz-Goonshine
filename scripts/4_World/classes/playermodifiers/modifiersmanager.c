modded class ModifiersManager
{
    override void Init()
    {
        super.Init();
        AddModifier(new sauce_BastardMdfr);
        AddModifier(new sauce_TinctureMdfr);
        AddModifier(new sauce_RebelJuiceMdfr);
        AddModifier(new sauce_PapochkaMdfr);
    }
}