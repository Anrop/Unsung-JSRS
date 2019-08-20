class CfgPatches {
    class anrop_unsung_jsrs_weapons_m14 {
        name = "anrop_unsung_jsrs_weapons_m14";
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
    
    class uns_M14_base : Uns_Rifle762 
    {
        drySound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\dry\mk14_dry.ogg", 1.5, 1, 15};
        reloadMagazineSound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\reload\mk14_reload.ogg", 2, 1, 35};
        changeFiremodeSound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\noises\mk14_firemode.ogg", 1.25, 1, 25};

        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_mk14_shot_soundset", "jsrs_7x62mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_mk14_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_mk14_shot_soundset", "jsrs_7x62mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_mk14_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };
    };
};
