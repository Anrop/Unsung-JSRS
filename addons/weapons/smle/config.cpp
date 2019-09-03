class CfgPatches {
    class anrop_unsung_jsrs_weapons_smle {
        name = "anrop_unsung_jsrs_weapons_smle";
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
    };

    class Uns_Rifle762: Uns_Rifle
    {
        class Single: Single
        {
            class StandardSound;
        };
    };

    class uns_Rifle_boltaction_base: Uns_Rifle762 {};

    class uns_Rifle_boltaction_clip_base: uns_Rifle_boltaction_base {};
    
    class uns_smle_base : uns_Rifle_boltaction_clip_base 
    {
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_leeenfield_shot_soundset", "jsrs_ww2_bolt_rifle_reverb_soundset"};
            };
        };
    };
};
