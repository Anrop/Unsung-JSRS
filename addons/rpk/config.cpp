class CfgPatches {
    class anrop_unsung_jsrs_weapons_rpk {
        name = "anrop_unsung_jsrs_weapons_rpk";
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
    class Uns_Rifle;

    class Uns_LMG: Uns_Rifle
    {
        class FullAuto;
    };

    class Uns_HMG: Uns_LMG
    {
        class FullAuto: FullAuto
        {
            class StandardSound;
        };
    };
    
    class uns_rpk_base : Uns_HMG 
    {
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_ak_m_shot_soundset", "jsrs_ak_m_shell_soundset", "jsrs_7x62mm_reflector_1"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_ak_m_shot_silenced_soundset", "jsrs_ak_m_shell_soundset", "jsrs_7x62mm_sd_reflector_1"};
            };
        };
    };
};
