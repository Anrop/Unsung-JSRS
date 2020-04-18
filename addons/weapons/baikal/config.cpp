class CfgPatches {
    class anrop_unsung_jsrs_weapons_baikal {
        name = "anrop_unsung_jsrs_weapons_baikal";
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
    class Uns_Shotgun;

    class uns_m1897: Uns_Shotgun
    {
        class FullAuto;
    };

    class uns_baikal: uns_m1897
    {
        class FullAuto: FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m590_shot_soundset", "jsrs_ww2_bolt_rifle_reverb_soundset"};
            };
        };
    };
};
