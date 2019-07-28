class CfgPatches {
    class anrop_unsung_jsrs_weapons_1911 {
        name = "anrop_unsung_jsrs_weapons_1911";
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
    
    class uns_coltcmdr : Uns_Pistol 
    {
        drysound[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\dry\acpc_dry.ogg", 1.5, 1, 15};
        reloadmagazinesound[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\reload\acpc_reload.ogg", 2, 1, 35};
        bullet1[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\metal_1.ogg", 2.0099, 1, 10};
        bullet2[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\metal_2.ogg", 2.0099, 1, 10};
        bullet3[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\metal_3.ogg", 2.0099, 1, 10};
        bullet4[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\metal_4.ogg", 2.0099, 1, 10};
        bullet5[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\dirt_1.ogg", 2.0099, 1, 10};
        bullet6[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\dirt_2.ogg", 2.0099, 1, 10};
        bullet7[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\dirt_3.ogg", 2.0099, 1, 10};
        bullet8[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\dirt_4.ogg", 2.0099, 1, 10};
        bullet9[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\grass_1.ogg", 2.0099, 1, 10};
        bullet10[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\grass_2.ogg", 2.0099, 1, 10};
        bullet11[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\grass_3.ogg", 2.0099, 1, 10};
        bullet12[] = {"\jsrs_soundmod\jsrs_soundmod_snd_weapons\sounds\shells\medium\grass_4.ogg", 2.0099, 1, 10};
        soundbullet[] = {"bullet1", 0.08, "bullet2", 0.084, "bullet3", 0.084, "bullet4", 0.084, "bullet5", 0.093, "bullet6", 0.093, "bullet7", 0.074, "bullet8", 0.074, "bullet9", 0.084, "bullet10", 0.085, "bullet11", 0.083, "bullet12", 0.083};
        
        class Single: Mode_SemiAuto
        {
            class StandardSound: StandardSound
            {
                soundSetShot[] = {"jsrs_pistol_shake_soundset", "jsrs_acpc_shot_soundset", "jsrs_acpc_shell_soundset", "jsrs_cal45_reflector_1"};
            };
            class SilencedSound: SilencedSound
            {
                soundSetShot[] = {"jsrs_pistol_shake_soundset", "jsrs_acpc_shot_silenced_soundset", "jsrs_acpc_shell_soundset", "jsrs_cal45_sd_reflector_1"};
            };
        };
    };
};
