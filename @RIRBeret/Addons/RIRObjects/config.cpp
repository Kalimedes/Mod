class CfgPatches
{
	class
	{
		author="Kalimedes";
		name="Beret for RIR";
		units[]={};
		weapons[]={};
		requiredVersion=1.0;
		version=1.14;
	fileName = "RIRObjects.pbo";
		};
};



class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class RIRBeret: ItemCore
	{
		weaponPoolAvailable = 1;
		scope = 2;
		displayName = "RIRBeret";
		picture = "\RIRObjects\Icons\icon.paa";
		model = "\RIRObjects\Objects\beret.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\RIRObjects\Objects\beret.p3d";
			modelSides[] = { TCivilian, TWest };
			hiddenSelections[] = { "camo" };
			
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 0.9;
				};
			};
		};
	};
};