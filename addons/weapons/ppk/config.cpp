class CfgPatches {
    class anrop_unsung_jsrs_weapons_ppk {
        name = "anrop_unsung_jsrs_weapons_ppk";
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
    class Uns_Pistol;
    
    class uns_ppk : Uns_Pistol 
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_Luger_shot_soundset", "jsrs_ww2_pistol_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_Luger_shot_silenced_soundset", "jsrs_cal45_sd_reverb_soundset"};
            };
        };
    };
};
