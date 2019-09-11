class CfgPatches {
    class anrop_unsung_jsrs_weapons_mg42 {
        name = "anrop_unsung_jsrs_weapons_mg42";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_armour_c", "uns_weap_c", "jsrs_soundmod_complete_edition"};
        addonRootClass = "uns_weap_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class Mode_FullAuto;

class CfgWeapons 
{
    class Uns_HMG;
    
    class uns_MG42_base : Uns_HMG 
    {
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_mg42_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
    };

    class Uns_LMG_v;

    class uns_M60_v : Uns_LMG_v 
    {
        class FullAuto;
    };

    class uns_PKT: uns_M60_v
    {
        class FullAuto: FullAuto
        {
            class StandardSound;
        };
    };

    class uns_mg42_v: uns_PKT
    {
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_mg42_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
    };
};
