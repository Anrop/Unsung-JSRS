class CfgPatches {
    class anrop_unsung_jsrs_weapons_svd {
        name = "anrop_unsung_jsrs_weapons_svd";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_weap_c", "JSRS_SOUNDMOD_Weapons"};
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
            class SilencedSound;
        };
    };
    
    class uns_svd_base : Uns_Rifle762 
    {
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_svd_shot_soundset", "jsrs_svd_shell_soundset", "jsrs_7x62mm_reflector_1"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_svd_shot_silenced_soundset", "jsrs_svd_shell_soundset", "jsrs_7x62mm_sd_reflector_1"};
            };
        };
    };
};
