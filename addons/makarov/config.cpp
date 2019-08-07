class CfgPatches {
    class anrop_unsung_jsrs_weapons_makarov {
        name = "anrop_unsung_jsrs_weapons_makarov";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"uns_weap_c", "JSRS_SOUNDMOD_Weapons"};
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
        drysound[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\dry\pm9m_dry.ogg", 1.5, 1, 15};
        reloadmagazinesound[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\reload\pm9m_reload.ogg", 2, 1, 35};
        
        class Single: Single
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_pistol_shake_soundset", "jsrs_pm9m_shot_soundset", "jsrs_pm9m_shell_soundset", "jsrs_9mm_reflector_1"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_pistol_shake_soundset", "jsrs_pm9m_shot_silenced_soundset", "jsrs_pm9m_shell_soundset", "jsrs_9mm_sd_reflector_1"};
            };
        };
    };
};
