class CfgPatches {
    class anrop_unsung_jsrs_weapons_m1897 {
        name = "anrop_unsung_jsrs_weapons_m1897";
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
    class Rifle_Base_F;

    class Uns_Rifle: Rifle_Base_F
    {
        class FullAuto;
    };

    class Uns_Shotgun: Uns_Rifle {};

    class uns_m1897: Uns_Shotgun
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
