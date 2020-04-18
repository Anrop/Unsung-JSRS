class CfgPatches {
    class anrop_unsung_jsrs_weapons_m870 {
        name = "anrop_unsung_jsrs_weapons_m870";
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

class CfgWeapons 
{
    class Uns_Rifle;

    class Uns_Shotgun: Uns_Rifle
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound;
        };
    };

    class uns_m870: Uns_Shotgun
    {
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_m590_shot_soundset", "jsrs_ww2_bolt_rifle_reverb_soundset"};
            };
        };
    };
};
