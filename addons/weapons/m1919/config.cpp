class CfgPatches {
    class anrop_unsung_jsrs_weapons_m1919 {
        name = "anrop_unsung_jsrs_weapons_m1919";
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
    class Rifle_Base_F;

    class Uns_Rifle: Rifle_Base_F
    {
        class FullAuto: Mode_FullAuto
        {
            class StandardSound;
        };
    };

    class Uns_LMG: Uns_Rifle {};

    class Uns_HMG: Uns_LMG {};
    
    class uns_m1919a6: Uns_HMG 
    {
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_browning_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
    };

    class uns_MGun_base;

    class Uns_LMG_v: uns_MGun_base {
        class FullAuto;
    };

    class uns_M60_v: Uns_LMG_v 
    {
        class FullAuto: FullAuto
        {
            class StandardSound;
        };
    };

    class uns_M1919_v_int: uns_M60_v
    {
        class FullAuto: FullAuto
        {
        	class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_browning_shot_soundset", "jsrs_ww2_mg_reverb_soundset"};
            };
        };
    };
};
