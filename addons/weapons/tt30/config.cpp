class CfgPatches {
    class anrop_unsung_jsrs_weapons_tt30 {
        name = "anrop_unsung_jsrs_weapons_tt30";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_weap_c", "jsrs_soundmod_complete_edition"};
        addonRootClass = "uns_weap_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class CfgWeapons 
{
    class Pistol_Base_F;

    class Uns_Pistol: Pistol_Base_F
    {
        class Single;
    };
    
    class uns_makarov: Uns_Pistol 
    {
        class Single: Single
        {
            class StandardSound;
            class SilencedSound;
        };
    };

    class uns_tt30: uns_makarov 
    {
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_tt33_shot_soundset", "jsrs_ww2_pistol_reverb_soundset"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_tt33_shot_silenced_soundset", "jsrs_cal45_sd_reverb_soundset"};
            };
        };
    };
};
