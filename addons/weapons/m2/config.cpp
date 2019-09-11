class CfgPatches {
    class anrop_unsung_jsrs_weapons_m2 {
        name = "anrop_unsung_jsrs_weapons_m2";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_armour_c", "jsrs_soundmod_complete_edition"};
        addonRootClass = "uns_armour_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class CfgWeapons 
{
    class MGun;

    class uns_MGun_base: MGun {};

    class Uns_HMG_v: uns_MGun_base
    {
        class FullAuto: uns_MGun_base
        {
            class StandardSound;
        };
    };
    
    class uns_M2 : Uns_HMG_v 
    {
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_m2_shot_soundset", "jsrs_hmg_reverb_soundset"};
            };
        };
    };
};
