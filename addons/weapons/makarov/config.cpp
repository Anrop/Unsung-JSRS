class CfgPatches {
    class anrop_unsung_jsrs_weapons_makarov {
        name = "anrop_unsung_jsrs_weapons_makarov";
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
    class Pistol_Base_F;

    class Uns_Pistol: Pistol_Base_F
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound;
            class SilencedSound;
        };
    };
    
    class uns_makarov: Uns_Pistol 
    {
        drySound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\dry\pm9m_dry.ogg", 1.5, 1, 15};
        reloadMagazineSound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\reload\pm9m_reload.ogg", 2, 1, 35};
        
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
    };
};
