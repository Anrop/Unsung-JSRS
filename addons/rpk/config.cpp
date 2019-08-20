class CfgPatches {
    class anrop_unsung_jsrs_weapons_rpk {
        name = "anrop_unsung_jsrs_weapons_rpk";
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
class Mode_FullAuto;

class CfgWeapons 
{
    class Rifle_Base_F;

    class Uns_Rifle: Rifle_Base_F
    {
        class FullAuto: Mode_FullAuto
        {
            class StandardSound;
            class SilencedSound;
        };
    };

    class Uns_LMG: Uns_Rifle {};

    class Uns_HMG: Uns_LMG {};
    
    class uns_rpk_base : Uns_HMG 
    {
        class FullAuto: FullAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_akm_shot_soundset", "jsrs_7x62mm_reverb_soundset"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"jsrs_akm_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };
    };
};
