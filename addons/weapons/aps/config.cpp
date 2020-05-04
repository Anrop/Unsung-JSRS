class CfgPatches {
    class anrop_unsung_jsrs_weapons_aps {
        name = "anrop_unsung_jsrs_weapons_aps";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_weap_c", "jsrs_soundmod_complete_edition"};
        addonRootClass = "uns_weap_c";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class Mode_FullAuto;

class CfgWeapons 
{
    class Pistol_Base_F;

    class Uns_Pistol: Pistol_Base_F
    {
        class Single;
    };
    
    class uns_makarov: Uns_Pistol 
    {
        class Single: Single
        {
            class StandardSound;
            class SilencedSound;
        };
    };

    class uns_APS: uns_makarov 
    {
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_pm9m_shot_soundset", "jsrs_9mm_reverb_soundset"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_pm9m_shot_silenced_soundset", "jsrs_9mm_sd_reverb_soundset"};
            };
        };

        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_pm9m_shot_soundset", "jsrs_9mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_pm9m_shot_silenced_soundset", "jsrs_9mm_sd_reverb_soundset"};
            };
        };
    };
};
