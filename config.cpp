class CfgPatches
{
	class Goonshine
	{
		requiredAddons[] = 
		{
			"DZ_Data",
			"JM_CF_Scripts",
			"NH_Scripts",
			"SFP2_framework"
		};
	};
};

class CfgMods
{
	class Goonshine
	{
		type = "mod";
		dependencies[]={"World"}; 
		class defs
		{
            class worldScriptModule
            {
                files[] = {"Goonshine/scripts/4_World"};
            };
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Goonshine_Base : Inventory_Base
	{
		scope = 0;
		model = "\SFP2\1_item\DrinkCan\vodka_samogon.p3d";
		weight = 450;
		itemSize[] = {1,2};
		destroyOnEmpty = 1;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 2048;
		varQuantityInit = 500;
		varQuantityMin = 0;
		varQuantityMax = 500;

		class AnimEvents
		{
			class SoundWeapon
			{
				class GlassBottle_in_B
				{
					soundSet = "SFP_Samogon_ProbkaOpen_soundset";
					id = 202;
				};
				class GlassBottle_in_C
				{
					soundSet = "GlassBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class GlassBottle_out_A
				{
					soundSet = "GlassBottle_out_A_SoundSet";
					id = 205;
				};
				class GlassBottle_out_B
				{
					soundSet = "SFP_Samogon_ProbkaClosed_soundset";
					id = 206;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
			};
		};
		
	};
	class sauce_Tincture : Goonshine_Base
	{
		scope = 2;
		displayName = "Tincture of Tinctures";
		descriptionShort="A legendary elixir with anomalous properties, it is said to be crafted with the help of a Burer... Unbelievable, but, chug it down and you'll feel like you just did whoopy with the Wishgranter.";
		hiddenSelectionsTextures[] = {"SFP2\1_item\DrinkCan\data_vodka\vodka_nasoy_co.paa"};	
	};
	class sauce_Bastard : Goonshine_Base
	{
		scope = 2;
		displayName = "Bastard";
		descriptionShort="Someone tried to make special meds that the Ecologists use. Ended up making something kind of like it, but it runs through you like molten lead... Not for casual drinking, but it can save you from rad poisoning!";
		hiddenSelectionsTextures[] = {"SFP2\1_item\DrinkCan\data_vodka\vodka_krotovuh_co.paa"};	
	};
	class sauce_Rebel_Juice : Goonshine_Base
	{
		scope = 2;
		displayName = "Rebel Juice";
		descriptionShort="It's said that Svaboda cooked this one up originally, but it's gotten around to some of the bandits too. If you ever wanted to drink meth, this is for you. Stalkers beware, it's painfully addictive.";
		hiddenSelectionsTextures[] = {"SFP2\1_item\DrinkCan\data_vodka\vodka_rabin_co.paa"};	
	};
	class sauce_PapochkasReserve : Goonshine_Base
	{
		scope = 2;
		displayName = "Tincture of Tinctures";
		descriptionShort="Papochka whipped this up just for you!";
		hiddenSelectionsTextures[] = {"SFP2\1_item\DrinkCan\data_vodka\vodka_samogon_co.paa"};	
	};
};