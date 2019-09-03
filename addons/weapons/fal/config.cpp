class CfgPatches {
    class anrop_unsung_jsrs_weapons_fal {
        name = "anrop_unsung_jsrs_weapons_fal";
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
    class Uns_Rifle762;
    
    class uns_fal_base : Uns_Rifle762 
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_fnfal_shot_soundset", "jsrs_7x62mm_reverb_soundset"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"jsrs_fnfal_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_fnfal_shot_soundset", "jsrs_7x62mm_reverb_soundset"};
            };
            class SilencedSound
            {
                soundSetShot[] = {"jsrs_fnfal_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };
    };
};
