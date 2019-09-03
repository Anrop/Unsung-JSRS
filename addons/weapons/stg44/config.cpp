class CfgPatches {
    class anrop_unsung_jsrs_weapons_stg44 {
        name = "anrop_unsung_jsrs_weapons_stg44";
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
        class Single;
        class FullAuto;
    };

    class Uns_Rifle762: Uns_Rifle
    {
        class Single: Single
        {
            class StandardSound;
            class SilencedSound;
        };

        class FullAuto: FullAuto
        {
            class StandardSound;
            class SilencedSound;
        };
    };
    
    class uns_STG_44 : Uns_Rifle762 
    {
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_stgw44_shot_soundset", "jsrs_ww2_carbine_reverb_soundset"};
            };
        };
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_stgw44_shot_soundset", "jsrs_ww2_carbine_reverb_soundset"};
            };
        };
    };
};
