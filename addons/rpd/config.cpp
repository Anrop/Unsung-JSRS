class CfgPatches {
    class anrop_unsung_jsrs_weapons_rpd {
        name = "anrop_unsung_jsrs_weapons_rpd";
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
            class SilencedSound;
        };
    };
    
    class uns_rpd_base : Uns_HMG 
    {
        class FullAuto: Mode_FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_ak_m_shot_soundset", "jsrs_ak_m_shell_soundset", "jsrs_7x62mm_reflector_1"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_rifle_shake_soundset", "jsrs_ak_m_shot_silenced_soundset", "jsrs_ak_m_shell_soundset", "jsrs_7x62mm_sd_reflector_1"};
            };
        };
    };
};
