class CfgPatches {
    class anrop_unsung_jsrs_weapons_bar {
        name = "anrop_unsung_jsrs_weapons_bar";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_weap_c", "jsrs_soundmod_complete_edition"};
        addonRootClass = "uns_weap_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons 
{
    class Rifle_Base_F;

    class Uns_Rifle: Rifle_Base_F
    {
        class FullAuto: Mode_FullAuto
        {
            class StandardSound;
        };
    };

    class Uns_LMG: Uns_Rifle {};
    
    class uns_bar_base: Uns_LMG 
    {
        class Slow: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_bar_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
        class Fast: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_bar_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
    };
};
